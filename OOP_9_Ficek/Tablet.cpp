#include "Tablet.h"

Tablet::Tablet(int id, string name, double price, int numOfItems, float screenSize, int batteryCapacity, int storageCap) : Product(id, name, price, numOfItems, storageCap)
{
	this->batteryCapacity = batteryCapacity;
	this->screenSize = screenSize;
}

float Tablet::getScreenSize()
{
	return this->screenSize;
}

int Tablet::getBatteryCap()
{
	return this->batteryCapacity;
}