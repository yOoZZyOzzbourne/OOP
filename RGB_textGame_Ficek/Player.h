#pragma once
#include <string>

#include "Player.h"
using namespace std;


class Player
{
private:
	
	int hp;
	int dmg;
	int code;
	double playerBalance;
	string attack;
	string name;
	static int objectsCount;

public:
	Player(int code, string name, int hp,int dmg, int balance);
	~Player();
	int GetHp();
	int GetDmg();
	int GetBalance();
	int GetCode();
	void setDmg(int dmg);
	void sethp(int hp);
	void setBallance(int bl);


	string GetAttack();
	string GetName();
	static int GetObjectCount();
};

