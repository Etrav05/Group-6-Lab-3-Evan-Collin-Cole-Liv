#include "Shapes.h"


int main() {

	Rectangle r1(4, 2);  // initailize rectangle objects
	Rectangle r2(2, 1);
	Rectangle calcR;

	Square s1(4);  // initailize square objects
	Square s2(5);
	Square calcS;

	calcR = r1 * 2 + r2;  // run functions
	calcS = s1 * 2 + s2;  
	
	cout << calcR << endl;  // insert objects into the output stream 
	cout << calcS << endl;

	return 0;
}
