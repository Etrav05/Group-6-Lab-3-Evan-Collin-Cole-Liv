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

	Shape operator+(Shape& rhs);
	Shape operator*(int x);

	void setH(int h);
	void setW(int w);

	int getH();
	int getW();

	friend ostream& operator<<(ostream& cout, Shape rhs);
};

class Rectangle :public Shape {
public:

	Rectangle();
	Rectangle(int height, int width);
};

class Square :public Shape {
public:

	Square();
	Square(int s);
};

ostream& operator<<(ostream& cout, Shape rhs);