#include "Figure.h"
#include <windows.h>
#include <glut.h>
#include <vector>
#include <array>
#include <vector>
#include <ctime>

Figure::Figure() {

	this->speedX = rand() % 10 / 1000.f * pow(-1, rand() % 2);
	this->speedY = rand() % 10 / 1000.f * pow(-1, rand() % 2);

	this->move = rand() % 2;

	printf("constructor Figure\n");
}

Figure::~Figure() {

	printf("deconstructor Figure\n");
}
