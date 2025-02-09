#include <iostream>
#include "Shapes.h"

using namespace std;

	Shape::Shape() {
		h = 0;
		w = 0;
	}

	Shape::Shape(int height, int width) {
		h = height;
		w = width;
	}

	int Shape::area() {
		return (h * w);
	}

	// Setters & Getters
	void Shape::setH(int h) { this->h = h; }
	void Shape::setW(int w) { this->w = w; }

	int Shape::getH() { return h; }
	int Shape::getW() { return w; }

	Rectangle::Rectangle() {
	}

	Rectangle::Rectangle(int height, int width) {
		h = height;
		w = width;
	}

	Rectangle Rectangle::operator+(Rectangle& rhs) {  // rectangle sum operator

		Rectangle sum;
		sum.h = this->h + rhs.h;  // height1 + height2
		sum.w = this->w + rhs.w;  // width1 + width2

		return sum;
	}

	Rectangle Rectangle::operator*(int x) {  // rectangle product operator

		Rectangle product;
		product.h = h * x;  // height1 * height2 
		product.w = w * x;  // width1 * width2

		return product;
	}

	Square::Square() {
	}

	Square::Square(int s) {
		h = s;
		w = s;
	}

	Square Square::operator+(Square& rhs) {  // rectangle sum operator

		Square sum;
		sum.h = this->h + rhs.h;  // height1 + height2
		sum.w = this->w + rhs.w;  // width1 + width2

		return sum;
	}

	Square Square::operator*(int x) {  // square product operator

		Square product;
		product.h = h * x;  // height1 * height2 
		product.w = w * x;  // width1 * width2

		return product;
	}

	ostream& operator<<(ostream& cout, Rectangle rhs) { // never do Rectangle rhs but in this case we have to (we'll learn another method later)
		cout << "Rectangle: The height = " << rhs.h << ", the width = " << rhs.w << " and the area = " << rhs.area() << endl;
		return cout;
	}

	ostream& operator<<(ostream& cout, Square rhs) { // 2 seperate functions to print based on what object class is inserted
		cout << "Square: The height = " << rhs.h << ", the width = " << rhs.w << " and the area = " << rhs.area() << endl;
		return cout;
	}