#pragma once
#include <iostream>

using namespace std;

class Shape {
protected:
	int h;
	int w;

public:

	Shape();
	Shape(int height, int width);

	virtual int area();

	void setH(int h);
	void setW(int w);

	int getH();
	int getW();
};

class Rectangle :public Shape {
public:

	Rectangle();
	Rectangle(int height, int width);

	Rectangle operator+(Rectangle& rhs);
	Rectangle operator*(int x);

	friend ostream& operator<<(ostream& cout, Rectangle rhs);
};

class Square :public Shape {
public:

	Square();
	Square(int s);

	Square operator+(Square& rhs);
	Square operator*(int x);

	friend ostream& operator<<(ostream& cout, Square rhs);
};

ostream& operator<<(ostream& cout, Rectangle rhs);
ostream& operator<<(ostream& cout, Square rhs);