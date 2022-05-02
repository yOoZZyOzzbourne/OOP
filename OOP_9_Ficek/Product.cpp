#include "Product.h"


Product::Product(int id, string name, double price, int numOfItems, int storageCap)
{
	this->id = id;
	this->name = name;
	this->price = price;
	this->numberOfItems = numOfItems;
	this->storageCap = storageCap;
}

int Product::getId()
{
	return this->id;
}

string Product::getName()
{
	return this->name;
}

double Product::getPrice()
{
	return this->price;
}
int Product::getNumOfItems()
{
	return this->numberOfItems;
}

bool Product::canBuy(int a)
{
	if (Product::getNumOfItems() >= a)
	{
		std::cout << "You can buy " << a << " items of " << Product::getName() << endl;
		return true;
	}
	else
		return false;
}