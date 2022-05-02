#include "Phone.h"

Phone::Phone(int id, string name, double price, int numOfItems, string color, float screenSize, int storageCap) : Product(id, name, price, numOfItems, storageCap)
{
	this->color = color;
	this->screenSize = screenSize;
}

string Phone::getColor()
{
	return this->color;
}

float Phone::getScreenSize()
{
	return this->screenSize;
}