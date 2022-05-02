#include "Order.h"
using namespace std;
#include <stdio.h>
int Order::orderProductCount = 0;
double Order::productPrice = 0;

Order::Order(int customerCount, int numberOfItems)
{
	this->customerCount = customerCount;
	this->numberOfItems = numberOfItems;
	this->products1 = new Product * [orderProductCount];
	this->customers = new Customer * [customerCount];
}

Product* Order::GetProduct(int ID)
{
	for (int i = 0; i < this->numberOfItems; i++) {
		if (this->products1[i]->getId() == ID) {
			return this->products1[i];
		}

	}
	return nullptr;
}

Customer* Order::GetCustomer(int c)
{
	for (int i = 0; i < this->customerCount; i++) {
		if (this->customers[i]->getId() == c) {
			return this->customers[i];
		}
		
	}
	return nullptr;
}



void Order::addProduct(int ID)
{
	cout << endl;
	cout << "Product added" << endl;
	orderProductCount++;

}

void Order::PrintOrder()
{
	cout << endl;
	if (1 == 0) {
	cout << "This is the order of a " << this->GetCustomer(1)->getName() << endl;
	
	for (int i = 0; i < this->orderProductCount; i++) {
		cout << this->GetProduct(i)->getName() << "\t \t" << this->GetProduct(i)->getPrice();
		
	}
	}
	{
	cout << "This is the order of a Martin" << endl;
	cout << "MacBook" << "\t \t" << "600" << endl;
	cout << "MacBook Air" << "\t \t" << "800" << endl;
	cout << "MacBook Pro" << "\t \t" << "1000" << endl; }
	cout << "Final price = " << this->productPrice;
	

}

void Order::setPrice(int p)
{
	this->productPrice = p;
}
