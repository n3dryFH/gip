#include "CImgGIP05.h"
#include "MyFilledRectangle.h"

MyFilledRectangle::MyFilledRectangle(int x1, int y1, int x2, int y2) : MyRectangle(x1, y1, x2, y2)
{
}


MyFilledRectangle::~MyFilledRectangle()
{
}

void MyFilledRectangle::draw() const
{
	MyRectangle::draw();
	if ((x2 - x1) > 4 && (y2 - y1) > 4)	
		for (unsigned int yPos = y1 + 2; yPos < y2 - 2; ++yPos)
			gip_draw_line(x1 + 2, yPos, x2 - 2, yPos, red);	
}
