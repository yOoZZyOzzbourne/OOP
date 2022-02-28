#pragma once
#include <iostream>
using namespace std;




class person
{
private:
	string adress;
	string name;

public:
	person(string name, string adress);
	string GetAdress();
	string GetName();
};

class Item {
private:
	double price;
	string name;
public:
	Item(double price, string name);
	double GetPrice();
	string GetName();
};

class Invoice {
private:
	int Fnumber;
	person* entit;
	Item** things;

	int count;
	int sum = 0;
public:
	Invoice(int Fnumber, string name, string adress, int count);
	~Invoice();
	Item* Addthing(double price, string name);
	double GetSum();

};