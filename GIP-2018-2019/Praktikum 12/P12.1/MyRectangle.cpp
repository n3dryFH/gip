#include "CImgGIP05.h"
#include "MyRectangle.h"

MyRectangle::MyRectangle() : x1(0), x2(20), y1(0), y2(20) { }

MyRectangle::MyRectangle(int x1, int y1, int x2, int y2) : x1(x1), x2(x2), y1(y1), y2(y2) { }

MyRectangle::~MyRectangle() { }

void MyRectangle::draw() const
{
	gip_draw_rectangle(x1, y1, x2, y2, blue);
}

bool MyRectangle::does_not_collide_with(const MyRectangle& other) const
{
	if (x2 < other.x1 || other.x2 < x1 ||
		other.y1 > y2 || y1 > other.y2)	
		return true;

	return false;
}

void MyRectangle::set(int x1, int y1, int x2, int y2)
{	
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;	
}
