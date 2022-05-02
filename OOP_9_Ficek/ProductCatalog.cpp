#include "ProductCatalog.h"


ProductCatalog::ProductCatalog(int maxItems)
{
	this->products = new Product * [maxItems];
	this->maxItems = maxItems;
	this->productCount = 0;
}

Product* ProductCatalog::CreateProduct(int id, string name, double price, int numOfItems, int storageCap)
{
	Product* newP = new Product(id, name, price, numOfItems, storageCap);
	this->products[this->productCount] = newP;
	this->productCount++;
	return newP;
}

Phone* ProductCatalog::CreateProduct(int id, string name, double price, int numOfItems, string color, float screenSize, int storageCap)
{
	Phone* newPhone = new Phone(id, name, price, numOfItems, color, screenSize, storageCap);
	this->products[this->productCount] = newPhone;
	this->productCount++;
	return newPhone;
}

Laptop* ProductCatalog::CreateProduct(int id, string name, double price, int numOfItems, float screenSize, int numOfCores, string graphiCard, bool backlitKey, int storageCap)
{
	Laptop* newL = new Laptop(id, name, price, numOfItems, screenSize, numOfCores, graphiCard, backlitKey, storageCap);
	this->products[this->productCount] = newL;
	this->productCount++;
	return newL;
}

Tablet* ProductCatalog::CreateProduct(int id, string name, double price, int numOfItems, float screenSize, int batteryCapacity, int storageCap)
{
	Tablet* newT = new Tablet(id, name, price, numOfItems, screenSize, batteryCapacity, storageCap);
	this->products[this->productCount] = newT;
	this->productCount++;
	return newT;
}


void ProductCatalog::showItems()
{
	std::cout << "ID \t" << "Product name \t\t" << "Price \t\t" << "Items on stock " << endl;
	for (int i = 0; i < this->productCount; i++)
	{
		std::cout << products[i]->getId() << "\t" << products[i]->getName() << "\t\t" << products[i]->getPrice() << "\t\t" << products[i]->getNumOfItems() << endl;
	}
}

int ProductCatalog::GetProductCount()
{
	return this->productCount;
}


