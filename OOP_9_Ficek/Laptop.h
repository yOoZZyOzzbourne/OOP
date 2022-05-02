#pragma once
#include "Product.h"

class Laptop : public Product {
private:
	float screenSize;
	bool backlitKey;
	int numOfCores;
	string graphicCard;

public:
	Laptop(int id, string name, double price, int numOfItems, float screenSize, int numOfCores, string graphicCard, bool backlitKey, int storageCap);
	float getScreenSize();
	bool getBacklitKey();
	int getCores();
	string getGraphicCard();

};
