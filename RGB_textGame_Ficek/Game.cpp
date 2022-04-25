#include "Game.h"
using namespace std;
#include <iostream>
int lv1count = 0;
int lv2count = 0;
int lv3count = 0;


Game::Game( int IC, int EC, int PC)
{
	

	this->Players = new Player * [PC];
	this->PlayersCount = 0;

	this->Lv1enemy = new LvOneEnemy * [lv1count];
	this->Lv2enemy = new LvTwoEnemy * [lv2count];
	this->Lv3enemy = new LvThreeEnemy * [lv3count];
	

	this->Items = new Item * [IC];
	this->ItemsCount = 0;
	this->EnemiesCount = 0;
	
}

Game::~Game()
{
	for (int i = 0; i < this->PlayersCount; i++)
	{
		delete this->Players[i];
	}

	for (int i = 0; i < this->ItemsCount; i++)
	{
		delete this->Items[i];
	}

	for (int i = 0; i < this->lv1count; i++)
	{
		delete this->Lv1enemy[i];
	}
	for (int i = 0; i < this->lv2count; i++)
	{
		delete this->Lv2enemy[i];
	}

	for (int i = 0; i < this->lv3count; i++)
	{
		delete this->Lv3enemy[i];
	}

	delete[] this->Items;
	delete[] this->Players;
	delete[] this->Lv1enemy;
	delete[] this->Lv2enemy;
	delete[] this->Lv3enemy;
}

Player* Game::GetPlayer(int c)
{
	for (int i = 0; i < this->PlayersCount; i++) {
		if (this->Players[i]->GetCode() == c) {
			return this->Players[i];
		}
	}
	return nullptr;
}

Item* Game::GetItem(int c)
{
	for (int i = 0; i < this->ItemsCount; i++) {
		if (this->Items[i]->GetCode() == c) {
			return this->Items[i];
		}
	}
	return nullptr;
}

LvOneEnemy* Game::GetLvOneEnemy(int c)
{
	for (int i = 0; i < this->lv1count	; i++) {
		if (this->Lv1enemy[i]->GetCode() == c) {
			return this->Lv1enemy[i];
		}
	}
	return nullptr;
}

LvTwoEnemy* Game::GetLvTwoEnemy(int c)
{
	for (int i = 0; i < this->lv2count; i++) {
		if (this->Lv2enemy[i]->GetCode() == c) {
			return this->Lv2enemy[i];
		}
	}
	return nullptr;

}

LvThreeEnemy* Game::GetLvThreeEnemy(int c)
{
	for (int i = 0; i < this->lv3count; i++) {
		if (this->Lv3enemy[i]->GetCode() == c) {
			return this->Lv3enemy[i];
		}
	}
	return nullptr;
}

int Game::GetEnemiesCount()
{
	return this->EnemiesCount;
}

Player* Game::CreatePlayer(int code,string name, int hp, int dmg, int balance)
{
	Player* newP = new Player(code,name, hp, dmg, balance);
	this->Players[this->PlayersCount] = newP;
	this->PlayersCount++;
	return newP;
}

LvOneEnemy* Game::CreateEnemy(int code)
{
	LvOneEnemy* newLV1 = new LvOneEnemy(code, "Berserk",0 , 0, 0);
	this->Lv1enemy[this->lv1count] = newLV1;
	this->lv1count++;
	this->EnemiesCount++;
	return newLV1;
}

LvTwoEnemy* Game::CreateEnemy(int code, string weapon)
{
	LvTwoEnemy* newLV2 = new LvTwoEnemy(code, "Warlord", 0, 0, 0, "Super smash" , "Axe");
	this->Lv2enemy[this->lv2count] = newLV2;
	this->lv2count++;
	this->EnemiesCount++;
	return newLV2;
}

LvThreeEnemy* Game::CreateEnemy(int code, string weapon, string buff)
{
	LvThreeEnemy* newLV3 = new LvThreeEnemy(code, "Dragon", 0, 0, 0,"Dragon breath", "none", "HP reset + DMG+","HP regen", "Fire");
	this->Lv3enemy[this->lv3count] = newLV3;
	this->lv3count++;
	this->EnemiesCount++;
	return newLV3;
}

Item* Game::CreateItem(int code, string name, int dmgB, int hpB, int cost)
{
	Item* newI = new Item(code, name, dmgB, hpB, cost);
	this->Items[this->ItemsCount] = newI;
	this->ItemsCount++;
	return newI;
}

void Game::En1Hit(int p, int e)
{
	cout << "Player is getting attacked by enemy:"<< " \t \t";
	this->GetPlayer(p)->sethp(this->GetPlayer(p)->GetHp() - this->GetLvOneEnemy(e)->GetDmg());
	cout << "Dmg taken:" << " \t \t " << this->GetLvOneEnemy(e)->GetDmg();
	cout << endl;
	
	if (this->GetPlayer(p)->GetHp() <= 0) {
		cout << endl << endl;
		cout << "Player died, here are yours stats" << endl;
		cout << "Player name:" << " \t \t " << this->GetPlayer(1)->GetName() << " \t \t " << "HP:" << this->GetPlayer(1)->GetHp() << " \t \t " << "DMG:" << this->GetPlayer(1)->GetDmg() << " \t \t " << "Balance:" << this->GetPlayer(1)->GetBalance() << " \t \t " << "Number of enemies killed: 0" << endl;
		system("pause");
	}
	
}

void Game::En2Hit(int p, int e)
{
	cout << "Player is getting attacked by enemy:" << " \t \t";
	this->GetPlayer(p)->sethp(this->GetPlayer(p)->GetHp() - this->GetLvTwoEnemy(e)->GetDmg());
	cout << "Dmg taken:" << " \t \t " << this->GetLvTwoEnemy(e)->GetDmg();
	cout << endl;

	if (this->GetPlayer(p)->GetHp() <= 0) {
		cout << endl << endl;
		cout << "Player died, here are yours stats" << endl;
		cout << "Player name:" << " \t \t " << this->GetPlayer(1)->GetName() << " \t \t " << "HP:" << this->GetPlayer(1)->GetHp() << " \t \t " << "DMG:" << this->GetPlayer(1)->GetDmg() << " \t \t " << "Balance:" << this->GetPlayer(1)->GetBalance() << " \t \t " << "Number of enemies killed: 1" << endl;
		cout << "Items equipped:" << " \t \t " << this->GetItem(1)->GetName() << endl;
		system("pause");
	}
}

void Game::En3Hit(int p, int e)
{
	cout << "Player is getting attacked by enemy:" << " \t \t";
	this->GetPlayer(p)->sethp(this->GetPlayer(p)->GetHp() - this->GetLvThreeEnemy(e)->GetDmg());
	cout << "Dmg taken:" << " \t \t " << this->GetLvThreeEnemy(e)->GetDmg();
	cout << endl;

	if (this->GetPlayer(p)->GetHp() <= 0) {
		cout << endl << endl;
		cout << "Player died, here are yours stats" << endl;
		cout << "Player name:" << " \t \t " << this->GetPlayer(1)->GetName() << " \t \t " << "HP:" << this->GetPlayer(1)->GetHp() << " \t \t " << "DMG:" << this->GetPlayer(1)->GetDmg() << " \t \t " << "Balance:" << this->GetPlayer(1)->GetBalance() << " \t \t " << "Number of enemies killed: 2" << endl;
		
		cout << "Items equipped:";
		for (int i = 0; i < this->ItemsCount; i++) {
			cout << " \t \t ";
			cout << Items[i]->GetName();
		}
		cout << endl;
		system("pause");
	} 
}

void Game::PlAttack1(int p, int e)
{
	cout << "Player is attacking the enemy:" << " \t \t";
	this->GetLvOneEnemy(e)->sethp(this->GetLvOneEnemy(e)->GetHp() - this->GetPlayer(p)->GetDmg());
	cout << "Dmg dealt:" << " \t \t " << this->GetPlayer(p)->GetDmg();
	cout << endl;
	if (this->GetLvOneEnemy(e)->GetHp() < 1) {
		this->GetPlayer(p)->setBallance(this->GetPlayer(p)->GetBalance() + this->GetLvOneEnemy(e)->GetDrop());
	}
}

void Game::PlAttack2(int p, int e)
{
	cout << "Player is attacking the enemy:" << " \t \t";
	this->GetLvTwoEnemy(e)->sethp(this->GetLvTwoEnemy(e)->GetHp() - this->GetPlayer(p)->GetDmg());
	cout << "Dmg dealt:" << " \t \t " << this->GetPlayer(p)->GetDmg();
	cout << endl;
	if (this->GetLvTwoEnemy(e)->GetHp() < 1) {
		this->GetPlayer(p)->setBallance(this->GetPlayer(p)->GetBalance() + this->GetLvTwoEnemy(e)->GetDrop());
	}
}

void Game::PlAttack3(int p, int e)
{
	cout << "Player is attacking the enemy:" << " \t \t";
	this->GetLvThreeEnemy(e)->sethp(this->GetLvThreeEnemy(e)->GetHp() - this->GetPlayer(p)->GetDmg() + 5);
	cout << "Dmg dealt:" << " \t \t " << this->GetPlayer(p)->GetDmg();
	cout << endl;
	if (this->GetLvThreeEnemy(e)->GetHp() < 1) {
		this->GetPlayer(p)->setBallance(this->GetPlayer(p)->GetBalance() + this->GetLvThreeEnemy(e)->GetDrop());
	}
}



void Game::PlayerEquipItem(int p,int i)
{
	/*this->Players[p]->sethp(Players[1]->GetHp() + Items[1]->GetHpBoost());
	this->Players[1]->setDmg(Players[1]->GetHp() + Items[1]->GetDmgBoost());*/
	this->GetPlayer(p)->sethp(this->GetPlayer(p)->GetHp() + this->GetItem(i)->GetHpBoost());
	this->GetPlayer(p)->setDmg(this->GetPlayer(p)->GetDmg() + this->GetItem(i)->GetDmgBoost());
	cout << "Player equipped an item:" << " \t \t" << this->GetItem(i)->GetName() << endl;
}

bool Game::PlayerBuyItem(int p, int i)
{
	if (this->CanPlayerBuy(p, i) == true) {
		this->GetPlayer(p)->setBallance(this->GetPlayer(p)->GetBalance() - this->GetItem(i)->GetCost());
		cout << "Player is buying an item:" << endl;
		this->PlayerEquipItem(p, i);
		return true;
	}
	else {
		cout << "Player tried to buy an item" << endl;
		cout << "Cannot buy due to low coins" << endl << endl;

		return false;
	}
}

bool Game::CanPlayerBuy(int p, int i)
{
	if (this->GetPlayer(p)->GetBalance() > this->GetItem(i)->GetCost()) {
		return true;
	}
	else {

		return false;
	}
}
