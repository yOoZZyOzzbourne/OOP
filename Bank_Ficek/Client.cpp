#include "Client.h"

Client::Client(int c, string n)
{
	this->code = c;
	this->name = n;
}

int Client::GetCode()
{
	return this->code;
}

string Client::GetName()
{
	return this->name;
}
