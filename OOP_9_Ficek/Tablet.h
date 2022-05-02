#pragma once
#include "Product.h"

class Tablet : public Product {
private:
	float screenSize;
	int batteryCapacity;
public:
	Tablet(int id, string name, double price, int numOfItems, float screenSize, int batteryCap, int storageCap);
	float getScreenSize();
	int getBatteryCap();

};
