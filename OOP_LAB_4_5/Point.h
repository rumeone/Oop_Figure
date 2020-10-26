#pragma once
#include "Figure.h"
#include <glut.h>


class Point : public Figure {
public:
	double x;
	double y;

	//float R;

	int r;
	int g;
	int b;

public:
	Point();
	~Point();
	void Draw() override;
	void Move() override;
	int get_r();
	int get_g();
	int get_b();
	//добавить гетеры скорости
};