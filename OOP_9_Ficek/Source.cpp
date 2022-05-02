#include <stdio.h>
#include"Product.h"
#include"ProductCatalog.h"
#include"Customer.h"
#include "Phone.h"
#include "Tablet.h"
#include "Order.h"

using namespace std;
int main()
{
	Customer* c = new Customer(1, "Martin");

	Product* p0 = new Product(1, "MacBook ", 600, 2, 64);
	Product* p1 = new Product(2, "MacBook Air", 800, 2, 128);
	Product* p2 = new Product(3, "MacBook Pro", 1000, 4, 256);

	

	

	ProductCatalog* pc = new ProductCatalog(30);
	pc->CreateProduct(5, "Computer", 1200, 3, 1000);
	pc->CreateProduct(6, "iPhone 11", 500, 19, "Silver", 6.1, 64);
	Product* p7 = pc->CreateProduct(7, "MacBook Air", 800, 2, 13.3, 2, "Apple M1", true, 128);
	pc->CreateProduct(8, "Ico's Ipad", 400, 15, 6.1, 6300, 64);



	pc->showItems();
	cout << endl;
	p7->canBuy(2);

	Order* NewOrder = new Order(1, 3);
	NewOrder->addProduct(1);
	NewOrder->addProduct(2);
	NewOrder->addProduct(3);
	NewOrder->setPrice(p0->getPrice() + p1->getPrice() + p2->getPrice());
	NewOrder->PrintOrder();

	return 0;
}