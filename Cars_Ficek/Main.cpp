using namespace std;
#include "Hair_cutting.h"
#include "hCb_adjustment.h"
#include "hC_beard.h"

int main() {

	cout << "Welcome to BarberShop" << endl << endl;
	cout << "Services" << endl;
	cout << "ID \t Price \t Hair Cutting \t Hair Washing \t Head Massage \t Beard Shawing \t Skin Treatment       Drink    Final Touches \t Burning Ears" << endl;

	Hair_cutting* HC1 = new Hair_cutting(1, 150, 1, 0, 0);
	Hair_cutting* HC2 = new Hair_cutting(2, 300, 1, 1, 1);

	cout << HC1->getID() << "\t " << HC1->getPrice() << " \t \t" << HC1->getHC(1) << "\t \t" << HC1->getHW(0) << "\t \t" << HC1->getHM(0) << endl;
	cout << HC2->getID() << "\t " << HC2->getPrice() << " \t \t" << HC2->getHC(1) << "\t \t" << HC2->getHW(1) << "\t \t" << HC2->getHM(1) << endl;

	hC_beard* HCB1 = new hC_beard(3, 400, 1, 1, 1, 1, 0, 0);
	hC_beard* HCB2 = new hC_beard(4, 500, 1, 1, 1, 1, 1, 1);

	cout << HCB1->getID() << "\t " << HCB1->getPrice() << " \t \t" << HCB1->getHC(1) << "\t \t" << HCB1->getHW(1) << "\t \t" << HCB1->getHM(1) << "\t \t" << HCB1->getBS(1) << "\t \t" << HCB1->getST(0)<< "\t \t" << HCB1->getDrink(0) << endl;
	cout << HCB2->getID() << "\t " << HCB2->getPrice() << " \t \t" << HCB2->getHC(1) << "\t \t" << HCB2->getHW(1) << "\t \t" << HCB2->getHM(1) << "\t \t" << HCB2->getBS(1) << "\t \t" << HCB2->getST(1) << "\t \t" << HCB2->getDrink(1) << endl;

	hCb_adjustment* HCBA1 = new hCb_adjustment(4, 600, 1, 1, 1, 1, 1, 1, 1, 1);
	cout << HCBA1->getID() << "\t " << HCBA1->getPrice() << " \t \t" << HCBA1->getHC(1) << "\t \t" << HCBA1->getHW(1) << "\t \t" << HCBA1->getHM(1) << "\t \t" << HCBA1->getBS(1) << "\t \t" << HCBA1->getST(1) << "\t \t" << HCBA1->getDrink(1) << "\t\t" <<HCBA1->getFT(1) << "\t\t\t" <<HCBA1->getBE(1) << endl;


	delete HC1, HC2, HCB1,HCB2,HCBA1;
	
	system("pause");
	return 0;
}