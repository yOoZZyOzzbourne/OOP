#include <iostream>

using namespace std;

#define _USE_MATH_DEFINES
#include <math.h>

class Circle {
protected:
	float radius;
public:
	Circle(float r) //Konstuktor pro objekt Circle
	{
		this->radius = r;
	}

	float GetRad()	//Funkce Vracej�c� radius
	{
		return this->radius;
	}

	float getArea() //Funkce pro vracen� Circle area
	{
		return (M_PI * radius * radius);
	}

};

class Rectangle {
protected:
	float length, height;
public:
	Rectangle(float l, float w) //Konstuktor pro objekt Rectangle
	{
		this->length = l;
		this->height = w;
	}
	float getLength() //Funkce vracej�c� hodnotu length
	{
		return this->length;
	}
	float getHeight() //Funkce vracej�c� hodnotu height
	{
		return this->height;
	}

	float getPerimeter() //funkce vracej�c� RectanglePerimete
	{

		return(2 * length + 2 * height);
	}
	float getArea()		//funkce vracej�c� RectangleArea
	{
		return(length * height);
	}
};

class Square : public Rectangle {
private:
	float length;
public:
	Square(float l) : Rectangle(l, l) //Konstuktor pro objekt Square s vyu��t�m d�di�nosti rectangle
	{
		this->length = l;
	}
	float getPerimeter() //Funkce vracej�c� Square Perimeter
	{
		return(4 * length);
	}
	float getLength() //Funkce vracej�c� hodnotu length
	{
		return this->length;
	}

	float getArea()		//Funkce vracej�c� Square area
	{
		return(length * length);
	}
};

class Cylinder : public Circle, public Rectangle {
public:
	Cylinder(float r, float l, float h) : Circle(r), Rectangle(l, h) //Konstruktor pro t��du Cylinder s pou��t�m d�di�nosti
	{

	}
	float getCyliVol() //Funkce vracej�c� CylinderVolume
	{
		return(M_PI * radius * radius * length);
	}


};


int main()
{
	Circle* c = new Circle(5);				//Vytvo�en� objektu t��dy Circle
	Cylinder* cyl = new Cylinder(3, 4, 5);	//Vytvo�en� objektu t��dy Cylinder
	Rectangle* r = new Rectangle(10, 15);	//Vytvo�en� objektu t��dy Rectangle
	Square* s = new Square(4);				//Vytvo�en� objektu t��dy Square

	cout << c->getArea() << endl;	//Vypis Circle Radius na obrazovku
	cout << cyl->getCyliVol() << endl;	//Vypis Cylinder Volume na obrazovku
	cout << s->getPerimeter() << endl;	//Vypis Square Perimeter na obrazovku

	Rectangle* t = s;					//Vytvo�en� objektu rectangle s hodnotami Square s
	cout << t->getPerimeter() << endl;	//Vypis Rectangle Perimeter

	//Program vytvo�� par geometrick�ch obrazc�
	//Vypi�e obvod a obsah 
	//Vyu��va d�di�nosti, p�ekryt� i protected prom�nn�ch 


	return 0;
}