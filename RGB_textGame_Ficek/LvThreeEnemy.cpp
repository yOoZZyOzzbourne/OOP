#include "LvThreeEnemy.h"
using namespace std;



LvThreeEnemy::LvThreeEnemy(int code, string name, int hp, int dmg, int drop, string sa, string weapon, string sp, string buff, string resistance) : LvTwoEnemy(code, name, hp, dmg, drop, sa , weapon)
{		
	this->hp = 600;
	this->dmg = 60;
	this->drop = 500;
	this->secondPhase = sp;
	this->buff = buff;
	this->resistance = resistance;

}

string LvThreeEnemy::GetSP()
{
	return this->secondPhase;
}

string LvThreeEnemy::GetBuff()
{
	return this->buff;
}

string LvThreeEnemy::GetResistance()
{
	return this->resistance;
}


