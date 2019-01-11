#define CIMGGIP_MAIN
#include "CImgGIP05Mock.h"
#include "MyRectangle.h"

void MyRectangle::draw()
{
	gip_draw_rectangle(x1, y1, x2, y2, blue);
}

bool MyRectangle::does_not_collide_with(const MyRectangle& other)
{
	if (x2 < other.getX1() || other.getX2() < x1 ||
		other.getY1() > y2 || y1 > other.getY2())	
		return true;

	return false;
}
