#pragma once
#include "LvThreeEnemy.h"
#include "Item.h"
#include "Player.h"
using namespace std;

class Game
{
private:
	Player** Players;
	LvOneEnemy** Lv1enemy;
	LvTwoEnemy** Lv2enemy;
	LvThreeEnemy** Lv3enemy;
	Item** Items;

	int ItemsCount;
	int EnemiesCount;
	int PlayersCount;
	

	 int lv1count;
	 int lv2count;
	 int lv3count;

public:

	Game( int IC, int EC, int PC);
	~Game();

	Player* GetPlayer(int c);
	Item* GetItem(int c);
	LvOneEnemy* GetLvOneEnemy(int c);
	LvTwoEnemy* GetLvTwoEnemy(int c);
	LvThreeEnemy* GetLvThreeEnemy(int c);

	int GetEnemiesCount();
	Player* CreatePlayer(int code,string name, int hp, int dmg, int balance);
	LvOneEnemy* CreateEnemy(int code);
	LvTwoEnemy* CreateEnemy(int code, string weapon);
	LvThreeEnemy* CreateEnemy(int code, string weapon, string buff);
	Item* CreateItem(int code, string name, int dmgB, int hpB, int cost);

	void En1Hit(int p, int e);
	void En2Hit(int p, int e);
	void En3Hit(int p, int e);
	
	void PlAttack1(int p, int e);
	void PlAttack2(int p, int e);
	void PlAttack3(int p, int e);

	void PlayerEquipItem(int p, int i);
	bool PlayerBuyItem(int p, int i);
	virtual bool CanPlayerBuy(int p, int i);
};

