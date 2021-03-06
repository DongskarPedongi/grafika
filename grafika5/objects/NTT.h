#ifndef __Kepulauan_H_
#define __Kepulauan_H_

#include <polygon.h> 

struct Sumbawa : public Polygon {
  Sumbawa() {
    //addPoint(Point<double>(300, 200));
    addPoint(Point<double>(600, 400));
    addPoint(Point<double>(610, 380));
    addPoint(Point<double>(620, 370));
    addPoint(Point<double>(630, 370));
    addPoint(Point<double>(640, 380));
    addPoint(Point<double>(630, 390));
    addPoint(Point<double>(610, 430));
    addPoint(Point<double>(590, 430));
    addPoint(Point<double>(580, 440));
    addPoint(Point<double>(550, 450));
    addPoint(Point<double>(560, 430));
    addPoint(Point<double>(560, 410));
    //addPoint(Point<double>(570, 390));
    //addPoint(Point<double>(580, 390));
    addPoint(Point<double>(580, 400));
    //addPoint(Point<double>(380, 200));
    //addPoint(Point<double>(420, 200));
    
    
  }
};

struct NTT1 : public Polygon {
  NTT1() {
    //addPoint(Point<double>(300, 200));
    addPoint(Point<double>(200, 400));
    addPoint(Point<double>(250, 400));
    addPoint(Point<double>(260, 403));
    addPoint(Point<double>(280, 430));
    addPoint(Point<double>(290, 430));
    addPoint(Point<double>(300, 450));
    addPoint(Point<double>(270, 460));
    addPoint(Point<double>(260, 460));
    addPoint(Point<double>(250, 450));
    addPoint(Point<double>(230, 435));
    addPoint(Point<double>(200, 425));
    addPoint(Point<double>(190, 410));
    addPoint(Point<double>(190, 405));
    
  }
};

struct NTT2 : public Polygon {
  NTT2() {
    //addPoint(Point<double>(300, 200));
    addPoint(Point<double>(300, 300));
    addPoint(Point<double>(350, 270));
    addPoint(Point<double>(380, 260));
    addPoint(Point<double>(390, 265));
    addPoint(Point<double>(410, 280));
    addPoint(Point<double>(420, 290));
    addPoint(Point<double>(490, 280));
    addPoint(Point<double>(500, 290));
    addPoint(Point<double>(510, 300));
    addPoint(Point<double>(510, 310));
    addPoint(Point<double>(490, 330));
    addPoint(Point<double>(480, 320));
    addPoint(Point<double>(460, 330));
    addPoint(Point<double>(400, 325));
    addPoint(Point<double>(350, 335));
    addPoint(Point<double>(300, 330));
    addPoint(Point<double>(290, 320));
  }
};

struct Madura : public Polygon {
  Madura(){
    //addPoint(Point<double>(300, 200));
    //atas sampe kepala
    addPoint(Point<double>(300, 270));
    addPoint(Point<double>(500, 270));
    addPoint(Point<double>(530, 265));
    addPoint(Point<double>(580, 280));
    addPoint(Point<double>(555, 290));
    addPoint(Point<double>(530, 290));
    //kepala sampe bawah
    addPoint(Point<double>(500, 320));
    addPoint(Point<double>(510, 320));
    addPoint(Point<double>(510, 330));
    addPoint(Point<double>(460, 325));
    addPoint(Point<double>(440, 330));
    addPoint(Point<double>(430, 350));
    addPoint(Point<double>(430, 350));
    //bawah
    addPoint(Point<double>(350, 355));
    addPoint(Point<double>(270, 350));
    addPoint(Point<double>(263, 340));
    addPoint(Point<double>(260, 330));
    addPoint(Point<double>(270, 300));
  }
};


struct Belitung : public Polygon {
  Belitung(){
    //addPoint(Point<double>(300, 200));
    //atas
    addPoint(Point<double>(140, 50));
    addPoint(Point<double>(250, 0));
    addPoint(Point<double>(550, 50));
    addPoint(Point<double>(650, 120));
    addPoint(Point<double>(700, 200));
    addPoint(Point<double>(650, 400));
    addPoint(Point<double>(640, 500));
    addPoint(Point<double>(700, 600));
    //lengkukan bawah
    addPoint(Point<double>(450, 600));
    addPoint(Point<double>(450, 550));
    addPoint(Point<double>(300, 450));
    addPoint(Point<double>(300, 550));
    addPoint(Point<double>(100, 600));
    addPoint(Point<double>(110, 200));
    
  }
};

struct Bali : public Polygon {
  Bali(){
    //addPoint(Point<double>(300, 200));
    //atas
    addPoint(Point<double>(140, 50));
    addPoint(Point<double>(250, 0));
    addPoint(Point<double>(550, 50));
    addPoint(Point<double>(650, 120));
    addPoint(Point<double>(700, 200));
    addPoint(Point<double>(650, 400));
    addPoint(Point<double>(640, 500));
    addPoint(Point<double>(700, 600));
    //lengkukan bawah
    addPoint(Point<double>(450, 600));
    addPoint(Point<double>(450, 550));
    addPoint(Point<double>(300, 450));
    addPoint(Point<double>(300, 550));
    addPoint(Point<double>(100, 600));
    addPoint(Point<double>(110, 200));
    
  }
};


struct Bangka : public Polygon {
  Bangka(){
    //addPoint(Point<double>(300, 200));
    //tengah kiri
    addPoint(Point<double>(400, 300));
    addPoint(Point<double>(360, 270));
    addPoint(Point<double>(330, 210));
    addPoint(Point<double>(180, 210));
    addPoint(Point<double>(160, 180));
    addPoint(Point<double>(160, 150));
    addPoint(Point<double>(250, 120));
    //atas
    addPoint(Point<double>(260, 75));
    addPoint(Point<double>(290, 30));
    addPoint(Point<double>(320, 30));
    addPoint(Point<double>(340, 60));
    addPoint(Point<double>(360, 90));
    addPoint(Point<double>(370, 100));    
    addPoint(Point<double>(400, 100));
    addPoint(Point<double>(410, 90));
    addPoint(Point<double>(410, 30));
    addPoint(Point<double>(480, 0));
    addPoint(Point<double>(510, 30));
    //tengah kanan
    addPoint(Point<double>(530, 180));
    addPoint(Point<double>(520, 210));
    addPoint(Point<double>(530, 240));
    //bawah
    addPoint(Point<double>(560, 300));
    addPoint(Point<double>(720, 330));
    addPoint(Point<double>(660, 390));
    addPoint(Point<double>(640, 420));
    addPoint(Point<double>(640, 430));
    
    addPoint(Point<double>(620, 470));
    
    addPoint(Point<double>(650, 480));
    addPoint(Point<double>(650, 490));
    addPoint(Point<double>(650, 500));
    addPoint(Point<double>(580, 500));
    addPoint(Point<double>(400, 420));
    addPoint(Point<double>(410, 360));
    
  }
};

#endif
