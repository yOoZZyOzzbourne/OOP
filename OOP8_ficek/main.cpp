#include <iostream>

using namespace std;

// Base class
class Shape {
public:

	virtual int getArea() = 0; //Využití abstraktní tøídy
	void setWidth(int w) {
		width = w;
	}

	void setHeight(int h) {
		height = h;
	}

protected:
	int width;
	int height;
};

// Derived classes
class Rectangle : public Shape { //Využití dìdiènosti
public:
	int getArea() {
		return (width * height);
	}
};

class Triangle : public Shape {	 //Využití dìdiènosti
public:
	int getArea() {
		return (width * height) / 2;
	}
};

int main(void) {
	Rectangle Rect;
	Triangle  Tri;

	Rect.setWidth(5);
	Rect.setHeight(7);

	// Volaní funkce rectangle area
	cout << "Total Rectangle area: " << Rect.getArea() << endl;

	Tri.setWidth(5);
	Tri.setHeight(7);

	// Volaní funkce Triagle area
	cout << "Total Triangle area: " << Tri.getArea() << endl;

	return 0;
}