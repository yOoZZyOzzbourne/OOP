#include "Invoice.h"


Item::Item(double price, string name)
{
	this->price = price;
	this->name = name;
}

//funkce vracející hodnotu price
double Item::GetPrice()
{
	return this->price;
}
//funkce vracející hodnotu name
string Item::GetName()
{
	return this->name;
}
//pøiøadí hodnotu name a adress pro objekt tøídy Person
person::person(string name, string adress)
{
	this->name = name;
	this->adress = adress;
}
//funkce vracející hodnotu adress
string person::GetAdress()
{
	return this->adress;
}
//funkce vracející hodnotu name
string person::GetName()
{
	return this->name;
}
//pøiøazení hodnot do objektu tøídy Faktura
Invoice::Invoice(int Fnumber, string name, string adress, int count)
{
	this->Fnumber = Fnumber;
	this->entit = new person(name, adress);
	this->things = new Item * [count];
	this->count = 0;
}
//Funkce která pøidá novou položku do faktury
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
//Funkce vracející celkovou sumu za položky ve faktuøe
double Invoice::GetSum()
{

	for (int i = 0; i < this->count; i++)
	{
		sum += this->things[i]->GetPrice();
	}

	return sum;
}