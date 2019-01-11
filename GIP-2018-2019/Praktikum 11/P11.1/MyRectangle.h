#pragma once

class MyRectangle 
{
public:
	MyRectangle(int x1, int y1, int x2, int y2) : x1(x1), x2(x2), y1(y1), y2(y2) {}
	MyRectangle() : x1(0), x2(20), y1(0), y2(20) {}

	void draw();
	bool does_not_collide_with(const MyRectangle& other);

	inline void set(int x1, int y1, int x2, int y2) 
	{
		this->x1 = x1;
		this->y1 = y1;
		this->x2 = x2;		
		this->y2 = y2;
	}

	inline void setX1(int value) { x1 = value; }
	inline void setX2(int value) { x2 = value; }
	inline void setY1(int value) { y1 = value; }
	inline void setY2(int value) { y2 = value; }

	inline int getX1() const { return x1; }
	inline int getX2() const { return x2; }
	inline int getY1() const { return y1; }
	inline int getY2() const { return y2; }
private:
	int x1, x2, y1, y2;
};