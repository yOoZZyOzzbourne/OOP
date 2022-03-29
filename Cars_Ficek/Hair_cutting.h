#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hair_cutting
{

private:
	int id;
	double price;
	bool hairCutting;
	bool hairWashing;
	bool headMassage;

public:
	Hair_cutting(int id, double price, bool hairCutting, bool hairWashing, bool headMassage);

	int getID();
	double getPrice();
	bool getHC(int a);
	bool getHW(int a);
	bool getHM(int a);
};

