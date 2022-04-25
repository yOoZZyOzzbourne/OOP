#include "Player.h"
using namespace std;
#include <iostream>

int Player::objectsCount = 0;

Player::Player(int code,string name, int hp, int dmg, int balance)
{
	this->code = code;
	this->name = name;
	this->hp = hp;
	this->dmg = dmg;
	this->playerBalance = balance;
	Player::objectsCount += 1;
}

Player::~Player()
{
	Player::objectsCount -= 1;
	cout << "Player has been deleted" << endl;
}


int Player::GetHp()
{
	return this->hp;
}

int Player::GetDmg()
{
	return this->dmg;
}

int Player::GetBalance()
{
	return this->playerBalance;
}

int Player::GetCode()
{
	return this->code;
}

void Player::setDmg(int dmg)
{
	this->dmg = dmg;
}

void Player::sethp(int hp)
{
	this->hp = hp;

}

void Player::setBallance(int bl)
{
	this->playerBalance = bl;
}





string Player::GetAttack()
{
	return this->attack;
}

string Player::GetName()
{
	return this->name;
}

int Player::GetObjectCount()
{
	return objectsCount;
}
