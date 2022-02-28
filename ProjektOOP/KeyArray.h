#pragma once
#include "KeyValue.h"

class KeyArray
{
private: 
	KeyValue** keyArray;
	int count;

public:
    KeyArray(int n);
	~KeyArray();
	KeyValue* CreateObject(int k, double v);
	KeyValue* SearchObject(int key);
	KeyValue* RemoveObject(int k);
	int Count();

};

