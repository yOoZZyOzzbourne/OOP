#include "Customer.h"

Customer::Customer(int id, string name)
{
	this->id = id;
	this->name = name;
	this->companyID = NULL;
}
Customer::Customer(int id, string name, int cmpid)
{
	this->id = id;
	this->name = name;
	this->companyID = cmpid;
}

int Customer::getId()
{
	return this->id;
}

int Customer::getCmpId()
{
	if (this->companyID != NULL)
	{
		return this->companyID;
	}
	else
	{
		std::cout << "It's customer not COMPANY!!" << endl;
	}

}
string Customer::getName()
{
	return this->name;
}