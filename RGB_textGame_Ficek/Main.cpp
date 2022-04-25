//5. RPG Textovka
//Projekt obsahuje tøídy hráèe, nepøátel, pøedmìtù.Dìdiènost se nabízí hlavnì u nepøátel
//(napø.speciální útok, zbroj).Stavy mohou být poèet životù, peníze, pøedmìty, které má
//hráè u sebe.
//

/* Poznámky
	- Hra je vytvoøena a nasimulována v mainu, 
	- Druhy nepøátel jsou pomocí dìdiènosti rozdìlení na 3 druhy podle úrovnì, úroveò 1,2,3
	- Každá úroveò nepøátel má DANÉ tyto atributy - životy, jméno, poškození a koøist, pomocí protected
	- Hráè bojuje postupnì proti všem typùm nepøátel, ubývají mu životy, ale mùže si nasadit nìjaký pøedmìt, který mu zlepší vlastnosti
	- Èistì abstraktní úèet je na funkci, jestli si mùže hráè koupit pøedmìt
	- Jsou zde nasimulované všechny varianty, hráè, který si chce koupit pøedmìt ale nemùže, bitvy proti všem 3 druhùm nepøátel, výhry, prohry,
	  koupení pøedmìtu, vypsání statistik po konci hry.
	

*/

using namespace std;
#include <iostream>
#include "LvThreeEnemy.h"
#include "LvOneEnemy.h"
#include "LvTwoEnemy.h"
#include "Item.h"
#include "Player.h"
#include "Game.h"



int main() {

	Game* FirstGame = new Game(3, 5, 1);

	FirstGame->CreatePlayer(1,"yOoZZy", 500, 50, 0);
	FirstGame->CreateEnemy(1);
	FirstGame->CreateEnemy(2, "axe");
	FirstGame->CreateEnemy(3, "none", "hp regen");
	FirstGame->CreateItem(1, "ChestPiece", 0, 150, 10000);
	FirstGame->CreateItem(2, "Ring of power", 40, 200, 10000);
	FirstGame->CreateItem(3, "Flask of Health",0 , 50 , 50);

	cout << "Welcome to the game" << endl << "This is the list of entities:" << endl << endl;
	cout << "Player name:" << " \t \t " << FirstGame->GetPlayer(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetPlayer(1)->GetHp() << " \t \t " << "DMG:" << FirstGame->GetPlayer(1)->GetDmg() << " \t \t " << "Balance:" << FirstGame->GetPlayer(1)->GetBalance() << endl;
	cout << "Enemy name:" << " \t \t " << FirstGame->GetLvOneEnemy(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetLvOneEnemy(1)->GetHp() << " \t \t " << "DMG:"<<FirstGame->GetLvOneEnemy(1)->GetDmg() << " \t \t " << "Drop:" <<FirstGame->GetLvOneEnemy(1)->GetDrop() << endl;
	cout << "Enemy name:" << " \t \t " <<FirstGame->GetLvTwoEnemy(2)->GetName()<< " \t \t " << "HP:" << FirstGame->GetLvTwoEnemy(2)->GetHp() << " \t \t " << "DMG:" << FirstGame->GetLvTwoEnemy(2)->GetDmg() << " \t \t " << "Drop:" << FirstGame->GetLvTwoEnemy(2)->GetDrop() << " \t \t " << "Special attack:"<<FirstGame->GetLvTwoEnemy(2)->GetSpecialAttack() << " \t \t " << "Weapon:"<<FirstGame->GetLvTwoEnemy(2)->GetWeapon() << endl;
	
	cout << "Enemy name:" << " \t \t " << FirstGame->GetLvThreeEnemy(3)->GetName() << " \t \t " << "HP:" << FirstGame->GetLvThreeEnemy(3)->GetHp() << " \t \t " << "DMG:" << FirstGame->GetLvThreeEnemy(3)->GetDmg() << " \t \t " << "Drop:" << FirstGame->GetLvThreeEnemy(3)->GetDrop() << " \t \t " << endl;
	cout << " \t \t \t \t \t \t " << "Special attack:" << FirstGame->GetLvThreeEnemy(3)->GetSpecialAttack() << " \t \t " << "Weapon:" << FirstGame->GetLvThreeEnemy(3)->GetWeapon() << " \t \t " << "Second phase:" << FirstGame->GetLvThreeEnemy(3)->GetSP() << " \t \t " << "Buff:" << FirstGame->GetLvThreeEnemy(3)->GetBuff() << " \t \t " << "Resistance:" << FirstGame->GetLvThreeEnemy(3)->GetResistance() << endl << endl;

	cout << "Item name:" << " \t \t " << FirstGame->GetItem(1)->GetName() << " \t \t " << "HPBoost:" << FirstGame->GetItem(1)->GetHpBoost() << " \t \t " << "DmgBoost:" << FirstGame->GetItem(1)->GetDmgBoost() << endl;
	cout << "Item name:" << " \t \t " << FirstGame->GetItem(2)->GetName() << " \t \t " << "HPBoost:" << FirstGame->GetItem(2)->GetHpBoost() << " \t \t " << "DmgBoost:" << FirstGame->GetItem(2)->GetDmgBoost() << endl;
	cout << "Item name:" << " \t \t " << FirstGame->GetItem(3)->GetName() << " \t " << "HPBoost:" << FirstGame->GetItem(3)->GetHpBoost() << " \t \t " << "DmgBoost:" << FirstGame->GetItem(3)->GetDmgBoost() << endl;

	cout << "Number of enemies:" << " \t \t " << FirstGame->GetEnemiesCount();
	cout << endl << endl << endl;
	
	FirstGame->PlayerBuyItem(1, 3);
	cout << "Game starts: Player is going aggainst an lv1 enemy" << endl;
	{
		while (FirstGame->GetPlayer(1)->GetHp() > 0 && FirstGame->GetLvOneEnemy(1)->GetHp() > 0) {
		FirstGame->En1Hit(1, 1);
		cout << "Player name:" << " \t \t " << FirstGame->GetPlayer(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetPlayer(1)->GetHp() << endl;

		FirstGame->PlAttack1(1, 1);
		cout << "Enemy name:" << " \t \t " << FirstGame->GetLvOneEnemy(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetLvOneEnemy(1)->GetHp() << endl;

	}

	cout << "Enemy felled" << endl;
	cout << "Player won, here are his rewards:" << " \t \t " << "Coins" << " \t \t " << FirstGame->GetLvOneEnemy(1)->GetDrop() << " \t \t " << "Item:" << " \t \t " << FirstGame->GetItem(1)->GetName() << endl;
	FirstGame->PlayerEquipItem(1, 1);
	cout << endl << "Player stats after fight" << endl;
	cout << "Player name:" << " \t \t " << FirstGame->GetPlayer(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetPlayer(1)->GetHp() << " \t \t " << "DMG:" << FirstGame->GetPlayer(1)->GetDmg() << " \t \t " << "Balance:" << FirstGame->GetPlayer(1)->GetBalance() << endl;
	cout << endl << endl;
	}
	

	cout << "Player is going aggainst an lv 2 enemy" << endl;
	{
	while (FirstGame->GetPlayer(1)->GetHp() > 0 && FirstGame->GetLvTwoEnemy(2)->GetHp() > 0) {

		FirstGame->En2Hit(1, 2);
		cout << "Player name:" << " \t \t " << FirstGame->GetPlayer(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetPlayer(1)->GetHp() << endl;

		FirstGame->PlAttack2(1, 2);
		cout << "Enemy name:" << " \t \t " << FirstGame->GetLvTwoEnemy(2)->GetName() << " \t \t " << "HP:" << FirstGame->GetLvTwoEnemy(2)->GetHp() << endl;

	}
	cout << "Enemy felled" << endl << endl;
	cout << "Player won, here are his rewards:" << " \t \t " << "Coins" << " \t \t " << FirstGame->GetLvTwoEnemy(2)->GetDrop() << " \t \t " << "Item:" << " \t \t " << FirstGame->GetItem(2)->GetName() << endl;
	FirstGame->PlayerEquipItem(1, 2);
	FirstGame->PlayerBuyItem(1, 3);
	cout << endl << "Player stats after fight" << endl;
	cout << "Player name:" << " \t \t " << FirstGame->GetPlayer(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetPlayer(1)->GetHp() << " \t \t " << "DMG:" << FirstGame->GetPlayer(1)->GetDmg() << " \t \t " << "Balance:" << FirstGame->GetPlayer(1)->GetBalance() << endl;
	cout << endl << endl;
     
	}


	cout << "Player is going aggainst boss of this game" << endl;
	{
		while (FirstGame->GetPlayer(1)->GetHp() > 0 && FirstGame->GetLvThreeEnemy(3)->GetHp() > 300) {

		FirstGame->En3Hit(1, 3);
		cout << "Player name:" << " \t \t " << FirstGame->GetPlayer(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetPlayer(1)->GetHp() << endl;

		FirstGame->PlAttack3(1, 3);
		cout << "Enemy name:" << " \t \t " << FirstGame->GetLvThreeEnemy(3)->GetName() << " \t \t " << "HP:" << FirstGame->GetLvThreeEnemy(3)->GetHp() << " +15" << endl;

	}
		cout << endl;

	cout << "Oh no, the player activated second phase of dragon" << endl;
	FirstGame->GetLvThreeEnemy(3)->sethp(600);
	FirstGame->GetLvThreeEnemy(3)->setdmg(FirstGame->GetLvThreeEnemy(3)->GetDmg() + 40);
	cout << "Enemy gained new powers:" << endl;
	cout << "Enemy name:" << " \t \t " << FirstGame->GetLvThreeEnemy(3)->GetName() << " \t \t " << "HP:" << FirstGame->GetLvThreeEnemy(3)->GetHp() << " \t \t " << "DMG:" << FirstGame->GetLvThreeEnemy(3)->GetDmg() << endl;
	cout << endl;
	while (FirstGame->GetPlayer(1)->GetHp() > 0 && FirstGame->GetLvThreeEnemy(3)->GetHp() > 0) {

		FirstGame->En3Hit(1, 3);
		cout << "Player name:" << " \t \t " << FirstGame->GetPlayer(1)->GetName() << " \t \t " << "HP:" << FirstGame->GetPlayer(1)->GetHp() << endl;

		FirstGame->PlAttack3(1, 3);
		cout << "Enemy name:" << " \t \t " << FirstGame->GetLvThreeEnemy(3)->GetName() << " \t \t " << "HP:" << FirstGame->GetLvThreeEnemy(3)->GetHp() << " +15" << endl;

	}

	}
	

	FirstGame->~Game();
	return 0;
	
}