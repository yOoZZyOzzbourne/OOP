#pragma once
using namespace std;
#include "LvTwoEnemy.h"
#include <string>

class LvThreeEnemy : public LvTwoEnemy
{
private:
	
	string secondPhase;
	string buff;
	string resistance;

public:
	LvThreeEnemy(int code, string name, int hp, int dmg,  int drop, string sa, string weapon, string sp, string buff, string resistance);
	string GetSP();
	string GetBuff();
	string GetResistance();
	

};