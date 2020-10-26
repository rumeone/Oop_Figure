#pragma once
class Figure
{
protected:

	double speedX;
	double speedY;

	int move;

public:
	Figure();
	~Figure();
	virtual void Draw() {};
	virtual void Move() {};

};

