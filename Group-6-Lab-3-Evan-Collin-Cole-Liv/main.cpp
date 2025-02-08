#include "Shapes.h"


int main() {

	Rectangle r1(4, 2);
	Rectangle r2(2, 1);
	Shape calcR;

	Square s1(4);
	Square s2(5);
	Shape calcS;

	calcR = (r1 * 2 + r2);
	calcS = (s1 * 2 + s2);
	
	cout << calcR << endl;
	cout << calcS << endl;

	return 0;
}

ostream& operator<<(ostream& cout, Shape rhs) { // never do Shape rhs but in this case we have to (we'll learn another method later)
	cout << "Shape: The height = " << rhs.h << ", the width = " << rhs.w << " and the area = " << rhs.area() << endl;
	return cout;
}