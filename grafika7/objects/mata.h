#ifndef __Mata_H_
#define __Mata_H_

#include "../../lib/polygon.h" 

struct Matakiri : public Polygon {
  Matakiri() {
    addCurve(Point<double>(380, 335), Point<double>(360, 320), Point<double>(310, 320), Point<double>(290, 325));
    addCurve(Point<double>(290, 335), Point<double>(310, 375), Point<double>(340, 375), Point<double>(370, 365));
    addCurve(Point<double>(370, 365), Point<double>(380, 355), Point<double>(380, 345), Point<double>(380, 335));
    setColor(255,255,255,0);
    move(0,-10);
  }
};
struct Matakanan : public Polygon {
  Matakanan() {
    addCurve(Point<double>(290, 335), Point<double>(310, 320), Point<double>(360, 320), Point<double>(380, 325));
    addCurve(Point<double>(380, 335), Point<double>(360, 375), Point<double>(330, 375), Point<double>(300, 365));
    addCurve(Point<double>(300, 365), Point<double>(290, 355), Point<double>(290, 345), Point<double>(290, 335));
    setColor(255,255,255,0);
    move(0,-10);
  }
};
struct Mata : public Polygon {
  Mata() {
    addCurve(Point<double>(290, 335), Point<double>(310, 310), Point<double>(360, 310), Point<double>(380, 335));
    addCurve(Point<double>(380, 335), Point<double>(360, 350), Point<double>(310, 350), Point<double>(290, 335));
    setColor(255,255,255,0);
  }
};
struct MataSedih : public Polygon {
  MataSedih() {
    addCurve(Point<double>(290, 335), Point<double>(310, 310), Point<double>(360, 310), Point<double>(380, 335));
    addCurve(Point<double>(380, 335), Point<double>(360, 350), Point<double>(310, 350), Point<double>(290, 335));
    setColor(255,255,255,0);
  }
};

struct MataSipit : public Polygon {
  MataSipit() {
    addCurve(Point<double>(290, 335), Point<double>(310, 315), Point<double>(360, 315), Point<double>(380, 335));
    addCurve(Point<double>(380, 335), Point<double>(360, 355), Point<double>(310, 355), Point<double>(290, 335));
    setColor(255,255,255,0);
  }
};

struct Tangisan : public Polygon {
  Tangisan() {
    addCurve(Point<double>(290, 335), Point<double>(310, 365), Point<double>(360, 365), Point<double>(380, 335));
    addCurve(Point<double>(380, 335), Point<double>(360, 355), Point<double>(310, 355), Point<double>(290, 335));
    setColor(205,192,176,0);
  }
};

struct Alis : public Polygon {
  Alis() {
    addCurve(Point<double>(290, 290), Point<double>(310, 280), Point<double>(360, 280), Point<double>(380, 290));
    addCurve(Point<double>(380, 290), Point<double>(360, 285), Point<double>(310, 285), Point<double>(290, 290));
    setColor(139,0,0,0);
  }
};

#endif