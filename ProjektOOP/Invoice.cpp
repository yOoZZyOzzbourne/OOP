#include "Invoice.h"


Item::Item(double price, string name)
{
	this->price = price;
	this->name = name;
}

double Item::GetPrice()
{
	return this->price;
}

string Item::GetName()
{
	return this->name;
}

person::person(string name, string adress)
{
	this->name = name;
	this->adress = adress;
}

string person::GetAdress()
{
	return this->adress;
}

string person::GetName()
{
	return this->name;
}

Invoice::Invoice(int Fnumber, string name, string adress, int count)
{
	this->Fnumber = Fnumber;
	this->entit = new person(name, adress);
	this->things = new Item * [count];
	this->count = 0;
}

Item* Invoice::AddThing(double price, string name)
{
	Item* newThing = new Item(price, name);
	this->things[this->count] = newThing;
	this->count += 1;
	return newThing;
}

Invoice::~Invoice()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->things[i];
	}
	delete[] this->things;
}

double Invoice::GetSum()
{

	for (int i = 0; i < this->count; i++)
	{
		sum += this->things[i]->GetPrice();
	}

	return sum;
}