#include <iostream>

using namespace std;

// Base class
class Shape {
public:

	virtual int getArea() = 0; //Vyu�it� abstraktn� t��dy
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
class Rectangle : public Shape { //Vyu�it� d�di�nosti
public:
	int getArea() {
		return (width * height);
	}
};

class Triangle : public Shape {	 //Vyu�it� d�di�nosti
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

	// Volan� funkce rectangle area
	cout << "Total Rectangle area: " << Rect.getArea() << endl;

	Tri.setWidth(5);
	Tri.setHeight(7);

	// Volan� funkce Triagle area
	cout << "Total Triangle area: " << Tri.getArea() << endl;

	return 0;
}