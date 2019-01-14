#pragma once

class MyRectangle
{
public:
	MyRectangle();
	MyRectangle(int x1, int y1, int x2, int y2);

	void draw();
	void set(int x1, int y1, int x2, int y2);
	bool does_not_collide_with(const MyRectangle& other);

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