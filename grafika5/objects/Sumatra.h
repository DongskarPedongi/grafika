#ifndef __SUMATRA_H_
#define __SUMATRA_H_

#include "../lib/polygon.h" 

struct Sumatra : public Polygon {
  Sumatra() {
    addPoint(Point(0, 0));
	addPoint(Point(0, 30));
	addPoint(Point(10, 30));
	addPoint(Point(10, 60));
	addPoint(Point(35, 60));
	addPoint(Point(35, 90));
	addPoint(Point(80, 90));
	addPoint(Point(80, 120));
	addPoint(Point(105, 120));
	addPoint(Point(105, 150));
	addPoint(Point(145, 150));
	addPoint(Point(145, 180));
	addPoint(Point(170, 180));
	addPoint(Point(170, 210));
	addPoint(Point(180, 210));
	addPoint(Point(180, 240));
	addPoint(Point(235, 240));
	addPoint(Point(235, 270));
	addPoint(Point(250, 270));
	addPoint(Point(250, 300));
	addPoint(Point(275, 300));
	addPoint(Point(275, 330));
	addPoint(Point(315, 330));
	addPoint(Point(315, 360));
	addPoint(Point(335, 360));
	addPoint(Point(335, 390));
	addPoint(Point(345, 390));
	addPoint(Point(345, 420));
	addPoint(Point(330, 420));
	addPoint(Point(330, 450));
	addPoint(Point(375, 450));
	addPoint(Point(375, 480));
	addPoint(Point(390, 480));
	addPoint(Point(390, 510));	
	addPoint(Point(435, 510));
	addPoint(Point(435, 540));
	addPoint(Point(460, 540));
	addPoint(Point(460, 570));
	addPoint(Point(500, 570));
	addPoint(Point(500, 600));
	addPoint(Point(525, 600));
	addPoint(Point(525, 630));    
	//Kanan
	addPoint(Point(675, 630));
	addPoint(Point(675, 600));
	addPoint(Point(680, 600));
	addPoint(Point(680, 570));
	addPoint(Point(670, 570));
	addPoint(Point(670, 540));
	addPoint(Point(680, 540));
	addPoint(Point(680, 510));
	addPoint(Point(670, 510));
	addPoint(Point(670, 480));
	addPoint(Point(645, 480));
	addPoint(Point(645, 450));
	addPoint(Point(630, 450));
	addPoint(Point(630, 420));
	addPoint(Point(615, 420));
	addPoint(Point(615, 390));
	addPoint(Point(605, 390));
	addPoint(Point(605, 360));
	addPoint(Point(555, 360));
	addPoint(Point(555, 330));
	addPoint(Point(575, 330));
	addPoint(Point(575, 300));
	addPoint(Point(550, 300));
	addPoint(Point(550, 270));
	addPoint(Point(475, 270));
	addPoint(Point(475, 240));
	addPoint(Point(450, 240));
	addPoint(Point(450, 210));
	addPoint(Point(410, 210));
	addPoint(Point(410, 180));
	addPoint(Point(355, 180));
	addPoint(Point(355, 150));
	addPoint(Point(315, 150));
	addPoint(Point(315, 120));
	addPoint(Point(260, 120));
	addPoint(Point(260, 90));
	addPoint(Point(245, 90));
	addPoint(Point(245, 60));
	addPoint(Point(160, 60));
	addPoint(Point(160, 30));
	addPoint(Point(90, 30));
	addPoint(Point(90, 0));
  }
};

#endif
