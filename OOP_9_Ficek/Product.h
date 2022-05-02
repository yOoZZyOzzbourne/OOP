#pragma once
#include <iostream>
#include <string>


using namespace std;

class Product {
private:
	int id;
	string name;
     double price;
	int numberOfItems;
	int storageCap;

public:
	Product(int id, string name, double price, int numberOfItems, int StorageCap);
	int getId();
	string getName();
	double getPrice();
	int getNumOfItems();

	bool canBuy(int a);

};
