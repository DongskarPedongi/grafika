#ifndef __SUMATRA_H_
#define __SUMATRA_H_

#include "../../lib/polygon.h" 

struct Sumatra : public Polygon {
  Sumatra() {
    addPoint(Point<double>(0, 0));
	//addPoint(Point<double>(0, 30));
	addPoint(Point<double>(10, 60));
	//addPoint(Point<double>(35, 60));
	addPoint(Point<double>(35, 90));
	//addPoint(Point<double>(80, 90));
	addPoint(Point<double>(80, 120));
	//addPoint(Point<double>(105, 120));
	addPoint(Point<double>(105, 150));
	//addPoint(Point<double>(145, 150));
	addPoint(Point<double>(145, 180));
	//addPoint(Point<double>(170, 180));
	addPoint(Point<double>(170, 210));
	//addPoint(Point<double>(180, 210));
	addPoint(Point<double>(180, 240));
	//addPoint(Point<double>(235, 240));
	addPoint(Point<double>(235, 270));
	//addPoint(Point<double>(250, 270));
	addPoint(Point<double>(250, 300));
	//addPoint(Point<double>(275, 300));
	addPoint(Point<double>(275, 330));
	//addPoint(Point<double>(315, 330));
	addPoint(Point<double>(315, 360));
	//addPoint(Point<double>(335, 360));
	addPoint(Point<double>(335, 390));
	//addPoint(Point<double>(345, 390));
	addPoint(Point<double>(345, 420));
	//addPoint(Point<double>(330, 420));
	addPoint(Point<double>(330, 450));
	//addPoint(Point<double>(375, 450));
	addPoint(Point<double>(375, 480));
	//addPoint(Point<double>(390, 480));
	addPoint(Point<double>(390, 510));	
	//addPoint(Point<double>(435, 510));
	addPoint(Point<double>(435, 540));
	//addPoint(Point<double>(460, 540));
	addPoint(Point<double>(460, 570));
	//addPoint(Point<double>(500, 570));
	addPoint(Point<double>(500, 600));
	//addPoint(Point<double>(525, 600));
	addPoint(Point<double>(525, 630));    
	//Kanan
	addPoint(Point<double>(675, 630));
	addPoint(Point<double>(675, 600));
	//addPoint(Point<double>(680, 600));
	addPoint(Point<double>(680, 570));
	//addPoint(Point<double>(670, 570));
	addPoint(Point<double>(670, 540));
	//addPoint(Point<double>(680, 540));
	addPoint(Point<double>(680, 510));
	//addPoint(Point<double>(670, 510));
	addPoint(Point<double>(670, 480));
	//addPoint(Point<double>(645, 480));
	addPoint(Point<double>(645, 450));
	//addPoint(Point<double>(630, 450));
	addPoint(Point<double>(630, 420));
	//addPoint(Point<double>(615, 420));
	addPoint(Point<double>(615, 390));
	//addPoint(Point<double>(605, 390));
	addPoint(Point<double>(605, 360));
	//addPoint(Point<double>(555, 360));
	addPoint(Point<double>(555, 330));
	//addPoint(Point<double>(575, 330));
	addPoint(Point<double>(575, 300));
	//addPoint(Point<double>(550, 300));
	addPoint(Point<double>(550, 270));
	//addPoint(Point<double>(475, 270));
	addPoint(Point<double>(475, 240));
	//addPoint(Point<double>(450, 240));
	addPoint(Point<double>(450, 210));
	//addPoint(Point<double>(410, 210));
	addPoint(Point<double>(410, 180));
	//addPoint(Point<double>(355, 180));
	addPoint(Point<double>(355, 150));
	//addPoint(Point<double>(315, 150));
	addPoint(Point<double>(315, 120));
	//addPoint(Point<double>(260, 120));
	addPoint(Point<double>(260, 90));
	//addPoint(Point<double>(245, 90));
	addPoint(Point<double>(245, 60));
	//addPoint(Point<double>(160, 60));
	addPoint(Point<double>(160, 30));
	//addPoint(Point<double>(90, 30));
	addPoint(Point<double>(90, 0));
  }
};

#endif