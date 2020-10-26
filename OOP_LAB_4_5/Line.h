#pragma once
#include "Point.h";
class Line : public Point
{
protected:
	double angle;
	Point point[2];
public:
	Line();
	void Draw();
	void Move();
	double get_angle();
	void set_angle(double angle);
};

