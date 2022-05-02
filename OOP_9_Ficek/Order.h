#pragma once
#include "Product.h"
#include "Customer.h"
using namespace std;
#include <stdio.h>

class Order
{
private:

	int customerCount;
	int numberOfItems;
	Customer** customers;
	Product** products1;
	static int orderProductCount;
	static double productPrice;


public:
	Order(int customer,int  numberOfItems);

	Product* GetProduct(int ID);
	Customer* GetCustomer(int c);
	

	void addProduct(int ID);
	void PrintOrder();
	void setPrice(int p);

};

