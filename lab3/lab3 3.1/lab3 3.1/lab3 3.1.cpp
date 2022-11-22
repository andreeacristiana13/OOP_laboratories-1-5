// lab3 3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Rectangle {
public:
	int lungime;
	int latime;
	Rectangle(int lungime, int latime) {
		this->lungime = lungime;
		this->latime = latime;
	}
	int Perimeter() {
		return 2 * (lungime + latime);
	}
	int Area() {
		return lungime * latime;
	}
};

int compareArea(Rectangle *r1, Rectangle *r2) {
	if (r1->Area() > r2->Area()) {
		return r1->Area();
	}

	return r2->Area();
}

int comparePerimeter(Rectangle* r1, Rectangle* r2) {
	if (r1->Perimeter() > r2->Perimeter()) {
		return r1->Perimeter();
	}
	
	return r2->Perimeter();
}

int main()
{
	Rectangle* rectangle1 = new Rectangle(3, 7);
	Rectangle* rectangle2 = new Rectangle(10, 5);
	cout << compareArea(rectangle1, rectangle2) << endl << comparePerimeter(rectangle1, rectangle2) << endl;

}

