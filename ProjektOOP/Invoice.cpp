#include "Invoice.h"


Item::Item(double price, string name)
{
	this->price = price;
	this->name = name;
}

//funkce vracej�c� hodnotu price
double Item::GetPrice()
{
	return this->price;
}
//funkce vracej�c� hodnotu name
string Item::GetName()
{
	return this->name;
}
//p�i�ad� hodnotu name a adress pro objekt t��dy Person
person::person(string name, string adress)
{
	this->name = name;
	this->adress = adress;
}
//funkce vracej�c� hodnotu adress
string person::GetAdress()
{
	return this->adress;
}
//funkce vracej�c� hodnotu name
string person::GetName()
{
	return this->name;
}
//p�i�azen� hodnot do objektu t��dy Faktura
Invoice::Invoice(int Fnumber, string name, string adress, int count)
{
	this->Fnumber = Fnumber;
	this->entit = new person(name, adress);
	this->things = new Item * [count];
	this->count = 0;
}
//Funkce kter� p�id� novou polo�ku do faktury
Item* Invoice::Addthing(double price, string name)
{
	Item* newThing = new Item(price, name);
	this->things[this->count] = newThing;
	this->count += 1;
	return newThing;
}
//Destruktor pro Fakturu
Invoice::~Invoice()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->things[i];
	}
	delete[] this->things;
}
//Funkce vracej�c� celkovou sumu za polo�ky ve faktu�e
double Invoice::GetSum()
{

	for (int i = 0; i < this->count; i++)
	{
		sum += this->things[i]->GetPrice();
	}

	return sum;
}