#pragma once
using namespace std;
#include <string>


class LvOneEnemy
{

private:

	int code;
protected:   int dmg;
protected:	 int hp;
protected:	 int drop;
	
	string name;
	

public:
	LvOneEnemy(int code, string name, int hp,  int dmg,  int drop);
	int GetCode();
	int GetDmg();
	int GetHp();
	int GetDrop();
	string GetName();
	void sethp(int hp);
	void setdmg(int dmg);
};

