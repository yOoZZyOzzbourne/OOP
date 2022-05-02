#include "Laptop.h"

Laptop::Laptop(int id, string name, double price, int numOfItems, float screenSize, int numOfCores, string graphicCard, bool backlitKey, int storageCap) : Product(id, name, price, numOfItems, storageCap)
{
	this->screenSize = screenSize;
	this->numOfCores = numOfCores;
	this->graphicCard = graphicCard;
	this->backlitKey = backlitKey;
}

float Laptop::getScreenSize()
{
	return this->screenSize;
}

int Laptop::getCores()
{
	return this->numOfCores;
}

string Laptop::getGraphicCard()
{
	return this->graphicCard;
}
bool Laptop::getBacklitKey()
{
	return this->backlitKey;
}