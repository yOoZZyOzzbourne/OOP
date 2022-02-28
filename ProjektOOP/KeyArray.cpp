#include "KeyArray.h"

KeyArray::KeyArray(int n)
{
	this->keyArray = new KeyValue * [n];
	this->count = 0;
}

KeyArray::~KeyArray()
{
	for (int i = 0; i < this->count; i++) {
		delete this->keyArray[i];
	}
	delete[] this->keyArray;
}

KeyValue* KeyArray::CreateObject(int k, double v)
{
	KeyValue* newObject = new KeyValue(k, v);
	this->keyArray[this->count] = newObject;
		this->count += 1;
	return newObject;
}

KeyValue* KeyArray::SearchObject(int key)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyArray[i]->GetKey() == key)
		{
			return this->keyArray[i];
		}
	}
}


int KeyArray::Count()
{
	return this->count;
}

KeyValue* KeyArray::RemoveObject(int k)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->keyArray[i]->GetKey() == k)
		{
			KeyValue* back = keyArray[i];
			this->count--;
			keyArray[i] = keyArray[count];
			keyArray[count] = nullptr;
			return back;
		}

	}
	return nullptr;

}