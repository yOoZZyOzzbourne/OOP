#pragma once
#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
	int id;
	int companyID;
	string name;

public:
	Customer(int id, string name);
	Customer(int id, string name, int companyID);
	int getId();
	int getCmpId();
	string getName();

};