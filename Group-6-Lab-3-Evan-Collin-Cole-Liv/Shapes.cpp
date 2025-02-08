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

	Shape Shape::operator+(Shape& rhs) {  // rectangle sum operator

		Shape sum;
		sum.h = this->h + rhs.h;  // height1 + height2
		sum.w = this->w + rhs.w;  // width1 + width2

		return sum;
	}

	Shape Shape::operator*(int x) {  // rectangle product operator

		Shape product;
		product.h = h * x;  // height1 * height2 
		product.w = w * x;  // width1 * width2

		return product;
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

	Square::Square() {
	}

	Square::Square(int s) {
		h = s;
		w = s;
	}