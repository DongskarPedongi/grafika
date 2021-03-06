#include <framebuffer.h>

FrameBuffer::FrameBuffer() {
  if (fbp == NULL) {
    init();
  }
}

FrameBuffer::~FrameBuffer() {
  close(fbfd);
}

/**
 * Initialize frame buffer. Copy frame buffer ("/dev/fb0") into memory.
 */
void FrameBuffer::init() {
  /* open the file for reading and writing */
  fbfd = open("/dev/fb0",O_RDWR);
  if (!fbfd) {
    printf("Error: cannot open framebuffer device.\n");
    exit(1);
  }
   
  /* get the fixed screen information */
  if (ioctl (fbfd, FBIOGET_FSCREENINFO, &finfo)) {
    printf("Error reading fixed information.\n");
    exit(2);
  }
   
  /* get variable screen information */
  if (ioctl (fbfd, FBIOGET_VSCREENINFO, &vinfo)) {
    printf("Error reading variable information.\n");
    exit(3);
  }
  printf("done\n");

  /* store important information */
  xres = vinfo.xres;
  yres = vinfo.yres;
  bits_per_pixel = vinfo.bits_per_pixel;

  /* map the device to memory */
  fbp = (char*)mmap(0, finfo.smem_len, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);

  /* initialize visited vector */
  if (visited.empty()) {
    visited.resize(xres);
    for (int i = 0; i < xres; ++i) {
      visited[i].resize(yres);
    }
  }
  if (color.empty()) {
    color.resize(xres);
    for (int i = 0; i < xres; ++i) {
      color[i].resize(yres);
    }
  }
}

#define MP make_pair

/**
 * Set pixel at (x, y, z) using RGBA red, green, blue, and alpha.
 * The value of alpha is unnecessary, the default is 0;
 */
void FrameBuffer::set(int x, int y, int z, char red = 0, char green = 0, char blue = 0, char alpha = 0) {
  /* Validate coordinate */
  if (x < 0 || x >= xres || y < 0 || y >= yres) {
    return;
  }

  Color warna = Color(red, green, blue, alpha);
  /* adds to lastSet */
  if (!visited[x][y]) {
    color[x][y] = MP(z, warna);
    visited[x][y] = 1;
    lastSet.push_back(MP(x, y));
  } else if (z < color[x][y].first) {
    color[x][y] = MP(z, warna);
  }
}

/**
 * Set pixel at (x, y, z) using color c.
 */
void FrameBuffer::set(int x, int y, int z = INT_MAX, Color c = Color::BLACK) {
  this->set(x, y, z, c.red, c.green, c.blue, c.alpha);
}

/**
 * Set pixel at p using color c.
 */
void FrameBuffer::set(Point<int> p, Color c) {
  this->set(p.x, p.y, p.z, c.red, c.green, c.blue, c.alpha);
}

void FrameBuffer::print() {
  for(int i = 0; i < lastSet.size(); i++) {
    int x = lastSet[i].first;
    int y = lastSet[i].second;
    int red = color[x][y].second.red;
    int green = color[x][y].second.green;
    int blue = color[x][y].second.blue;
    int alpha = color[x][y].second.alpha;
    int location = getLocation(x, y);
    if (bits_per_pixel == 32) {
      *(fbp + location + 0) = blue;
      *(fbp + location + 1) = green;
      *(fbp + location + 2) = red;
      *(fbp + location + 3) = alpha;
    }
    else if (bits_per_pixel == 16) {
      unsigned short int t = (red >> 3) << 11 | (green >> 2) << 5 | (blue >> 3);
      *((unsigned short int*)(fbp + location)) = t;     
    }
    else {
      printf("Unknown bpp format: %d bpp\n", vinfo.bits_per_pixel);
    }
  }
}

void FrameBuffer::print_exclude(Point<int> a, Point<int> b) {
  for(int i = 0; i < lastSet.size(); i++) {
    int x = lastSet[i].first;
    int y = lastSet[i].second;
    if(a.x <= x && x <= b.x && a.y <= y && y <= b.y) continue;
    int red = color[x][y].second.red;
    int green = color[x][y].second.green;
    int blue = color[x][y].second.blue;
    int alpha = color[x][y].second.alpha;
    int location = getLocation(x, y);
    if (bits_per_pixel == 32) {
      *(fbp + location + 0) = blue;
      *(fbp + location + 1) = green;
      *(fbp + location + 2) = red;
      *(fbp + location + 3) = alpha;
    }
    else if (bits_per_pixel == 16) {
      unsigned short int t = (red >> 3) << 11 | (green >> 2) << 5 | (blue >> 3);
      *((unsigned short int*)(fbp + location)) = t;     
    }
    else {
      printf("Unknown bpp format: %d bpp\n", vinfo.bits_per_pixel);
    }
  }
}

void FrameBuffer::print_include(Point<int> a, Point<int> b) {
  for(int i = 0; i < lastSet.size(); i++) {
    int x = lastSet[i].first;
    int y = lastSet[i].second;
    if(a.x <= x && x <= b.x && a.y <= y && y <= b.y) {
      int red = color[x][y].second.red;
      int green = color[x][y].second.green;
      int blue = color[x][y].second.blue;
      int alpha = color[x][y].second.alpha;
      int location = getLocation(x, y);
      if (bits_per_pixel == 32) {
        *(fbp + location + 0) = blue;
        *(fbp + location + 1) = green;
        *(fbp + location + 2) = red;
        *(fbp + location + 3) = alpha;
      }
      else if (bits_per_pixel == 16) {
        unsigned short int t = (red >> 3) << 11 | (green >> 2) << 5 | (blue >> 3);
        *((unsigned short int*)(fbp + location)) = t;     
      }
      else {
        printf("Unknown bpp format: %d bpp\n", vinfo.bits_per_pixel);
      }
    }
  }
}

/**
 * Get color at p.
 */
Color FrameBuffer::get(Point<int> p) {
  return get(p.x, p.y);
}

/**
 * Get color at (x, y).
 */
Color FrameBuffer::get(int x, int y) {
  /* Validate coordinate */
  if (x < 0 || x >= xres || y < 0 || y >= yres) {
    return Color();
  }
  int location = getLocation(x, y);
  char red, green, blue, alpha;
  if (bits_per_pixel == 32) {
    blue  = *(fbp + location + 0);
    green = *(fbp + location + 1);
    red   = *(fbp + location + 2);
    alpha = *(fbp + location + 3);
  }
  else if (bits_per_pixel == 16) {
    unsigned short int t = *((unsigned short int*)(fbp + location));
    red   = (char)((t >> 11) << 3);
    green = (char)((t >> 5) << 2);
    blue  = (char)(t << 3);
    alpha = 0;
  }
  else {
    printf("Unknown bpp format: %d bpp\n", vinfo.bits_per_pixel);
    red = green = blue = alpha = 0;
  }
  return Color(red, green, blue, alpha);
}

/**
 * Clear the screen. Color them with the default color (BLACK)
 */
void FrameBuffer::clear() {
  while (lastSet.size()) {
    std::pair<int, int> &p = lastSet.back();
    color[p.first][p.second] = MP(0, Color::BLACK);
    visited[p.first][p.second] = 0;
    lastSet.pop_back();
  }
}

void FrameBuffer::clear(std::vector<Point<int> >& all) {
  while(!all.empty()) {
    Point<int> &p = all.back();
    if (0 <= p.x && p.x < xres && 0 <= p.y && p.y < yres) {
      color[p.x][p.y] = MP(0, Color::BLACK);
      visited[p.x][p.y] = 0;
    }
    all.pop_back();
  }
}

/**
 * Refresh the screen. Unmap the memory back to the "/dev/fb0"
 */
void FrameBuffer::refresh() {
  /* unmap the framebuffer */
  munmap(fbp, finfo.smem_len);

  /* after the unmap operation, fbp and fbfd will be invalid.
   * it is necessary to do re-initialize */
  close(fbfd);
  init();
}

int FrameBuffer::getXSize() {
  return xres;
}

int FrameBuffer::getYSize() {
  return yres;
}

/**
 * Get memory offset for pixel at (x, y).
 */
int FrameBuffer::getLocation(int x, int y) {
  return (x + vinfo.xoffset) * (vinfo.bits_per_pixel / 8) +
         (y + vinfo.yoffset) * finfo.line_length;
}


/* FrameBuffer variables */
int FrameBuffer::fbfd = 0;
char* FrameBuffer::fbp = NULL;
std::vector<std::vector<int> > FrameBuffer::visited;
std::vector<std::pair<int, int> > FrameBuffer::lastSet;
std::vector<std::vector<std::pair<int, Color> > > FrameBuffer::color;