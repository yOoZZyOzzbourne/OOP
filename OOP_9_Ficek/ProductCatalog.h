#pragma once
#include "Product.h"
#include "Phone.h"
#include "Laptop.h"
#include "Tablet.h"

class ProductCatalog {
private:
	int productCount;
	int maxItems;
	Product** products;
	Phone** phones;
	Laptop** laptops;
	Tablet** tablets;
public:
	ProductCatalog(int maxItems);

	Product* CreateProduct(int id, string name, double price, int numOfItems, int storageCap);
	Phone* CreateProduct(int id, string name, double price, int numOfItems, string color, float screenSize, int storageCap);
	Laptop* CreateProduct(int id, string name, double price, int numOfItems, float screenSize, int numOfCores, string graphiCard, bool backlitKey, int storageCap);
	Tablet* CreateProduct(int id, string name, double price, int numOfItems, float screenSize, int batteryCapacity, int storageCap);
	void showItems();
	int GetProductCount();
	

	

};