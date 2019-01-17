#pragma once
#include "MyRectangle.h"

class MyFilledRectangle : public MyRectangle
{
public:
	MyFilledRectangle(int x1, int y1, int x2, int y2);
	~MyFilledRectangle() override;

	void draw() const override;
};

