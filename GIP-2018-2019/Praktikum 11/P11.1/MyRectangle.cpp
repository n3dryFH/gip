#include "MyRectangle.h"
#include "CImgGIP05.h"

MyRectangle::MyRectangle() : x1(0), x2(20), y1(0), y2(20) {}

MyRectangle::MyRectangle(int x1, int y1, int x2, int y2) : x1(x1), x2(x2), y1(y1), y2(y2) {}

void MyRectangle::draw()
{
	gip_draw_rectangle(x1, y1, x2, y2, blue);
}

void MyRectangle::set(int x1, int y1, int x2, int y2)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}