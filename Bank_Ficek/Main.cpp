#include "Client.h"
#include "Bank.h"
#include "Account.h"
#include <iostream>
#include "CreditAccount.h"
#include "PartnerAccount.h"

using namespace std;

int main() {

	cout << "Welcome to the banking system" << endl;
	Account* a;
	PartnerAccount* partner;
	Bank* IcoBank = new Bank(10, 100);
	

	IcoBank->CreateClient(1, "Ico");  //vytvo¯enÌ klienta a jeho ˙Ëtu
	Client* firstC = IcoBank->GetClient(1);  //promÏnn· first client
	Account* firstA = IcoBank->CreateAccount(1, firstC); //promÏnn· first account
	firstA->Deposit(1000); //vloûenÌ na ˙Ëet

	IcoBank->CreateClient(2, "Steph");
	Client* secondC = IcoBank->GetClient(2);  //promÏnn· client
	Account* secondA = IcoBank->CreateAccount(2, secondC); //promÏnn· third account
	secondA->Deposit(12000);

	IcoBank->CreateClient(3, "Kemol");
	Client* thirdC = IcoBank->GetClient(3);  //promÏnn· client
	Account* thirdA = IcoBank->CreateAccount(3, thirdC, 1.5); //promÏnn· second account
	thirdA->Deposit(10000);

	IcoBank->CreateClient(4, "Georgi");
	Client* fourthC = IcoBank->GetClient(4);  //promÏnn· client
	Account* fourthA = IcoBank->CreateAccount(4, fourthC, 2.0); //promÏnn· third account
	fourthA->Deposit(40200);

	

	//vypis {}
	cout << "Client Name" << " \t \t " << "Balance" << " \t " << "Interest Rate " << endl; 
 	/*Cout - Client 1*/ {
	cout << IcoBank->GetClient(1)->GetName();
	cout << " \t \t \t ";
	cout << IcoBank->GetAccount(1)->GetBalance();
	cout << "\t \t ";
	cout << IcoBank->GetAccount(1)->GetInterestRate() << endl; } 

	/*Cout - Client 2*/ {
	cout << IcoBank->GetClient(2)->GetName();
	cout << " \t \t \t ";
	cout << IcoBank->GetAccount(2)->GetBalance();
	cout << "\t \t ";
	cout << IcoBank->GetAccount(2)->GetInterestRate() << endl; }

	/*Cout - Client 3*/ {
	cout << IcoBank->GetClient(3)->GetName();
	cout << " \t \t \t ";
	cout << IcoBank->GetAccount(3)->GetBalance();
	cout << "\t \t ";
	cout << IcoBank->GetAccount(3)->GetInterestRate() << endl; }

	/*Cout - Client 4*/ {
		cout << IcoBank->GetClient(4)->GetName();
		cout << " \t \t \t ";
		cout << IcoBank->GetAccount(4)->GetBalance();
		cout << "\t \t ";
		cout << IcoBank->GetAccount(4)->GetInterestRate() << endl; }

	cout << endl;
	IcoBank->AddInterest(); //po urocich
	cout << "After annual interest" << endl;
	
	/*Cout - Client 1*/ {
	cout << IcoBank->GetClient(1)->GetName();
	cout << " \t \t \t ";
	cout << IcoBank->GetAccount(1)->GetBalance();
	cout << "\t \t ";
	cout << IcoBank->GetAccount(1)->GetInterestRate() << endl; }

	/*Cout - Client 2*/ {
	cout << IcoBank->GetClient(2)->GetName();
	cout << " \t \t \t ";
	cout << IcoBank->GetAccount(2)->GetBalance();
	cout << "\t \t ";
	cout << IcoBank->GetAccount(2)->GetInterestRate() << endl; }

	/*Cout - Client 3*/ {
	cout << IcoBank->GetClient(3)->GetName();
	cout << " \t \t \t ";
	cout << IcoBank->GetAccount(3)->GetBalance();
	cout << "\t \t ";
	cout << IcoBank->GetAccount(3)->GetInterestRate() << endl; }

	/*Cout - Client 4*/ {
		cout << IcoBank->GetClient(4)->GetName();
		cout << " \t \t \t ";
		cout << IcoBank->GetAccount(4)->GetBalance();
		cout << "\t \t ";
		cout << IcoBank->GetAccount(4)->GetInterestRate() << endl; }

	cout << endl << endl;
	cout << "Withdraws" << endl;
	cout << "Client Name" << " \t \t " << "Balance after withdraw" << " \t " << "Withdraw amount " << endl;
	secondA->Withdraw(10000);
	
	/*Cout - Client 2 - withdraws*/ {
		cout << IcoBank->GetClient(2)->GetName();
		cout << "\t \t \t \t  ";
		cout << IcoBank->GetAccount(2)->GetBalance();
		cout <<  endl; }

	secondA->Withdraw(8000); //Ë·stka co nelze vybrat
	
	/*Cout - Client 2 - withdraws */ {
		cout << IcoBank->GetClient(2)->GetName();
		cout << "\t \t \t \t  ";
		cout << IcoBank->GetAccount(2)->GetBalance();
		cout << endl; }
	

	cout << endl << endl;
	cout << "Number of Accounts:      -   " << endl;
	cout << " \t \t \t " << firstA->GetObjCount() << endl;			
	thirdA->~Account();								
	cout << " \t \t \t " << firstA->GetObjCount() << endl;
	secondA->~Account();
	cout << " \t \t \t " << firstA->GetObjCount() << endl; //OOP 4

	//OOP 5


	PartnerAccount* pa = new PartnerAccount(1, new Client(1, "Peter"), new Client(1, "Leonidas"));		
	Account* pa1 = pa;																					
	pa->Deposit(10000);
	PartnerAccount* par = new PartnerAccount(2, new Client(2, "Dennis"), new Client(2, "Dan"));	
	Account* pa2 = par;																			
	par->Deposit(5000);
	PartnerAccount* part = new PartnerAccount(3, new Client(3, "Sylvi"), new Client(3, "Jin"));
	Account* pa3 = part;
	part->Deposit(2500);

	cout << "Clients with partners" << endl;

	cout << endl;
	cout << "Owner \t \t \t Partner \t Balance" << endl;
	  
	/*Cout partnerAccout 1*/ {
		cout << pa1->GetOwner()->GetName();
		cout << " \t \t \t ";
		cout << pa->GetPartner()->GetName();
		cout << " \t ";
		cout << pa1->GetBalance() << endl;
	}

	/*Cout partnerAccout 2*/ {
		cout << pa2->GetOwner()->GetName();
		cout << " \t \t \t ";
		cout << par->GetPartner()->GetName();
		cout << " \t \t ";
		cout << pa2->GetBalance() << endl;
	}

	/*Cout partnerAccout 3*/ {
		cout << pa3->GetOwner()->GetName();
		cout << " \t \t \t ";
		cout << part->GetPartner()->GetName();
		cout << " \t \t ";
		cout << pa3->GetBalance() << endl;
	}


	//Client* c = IcoBank->CreateClient(10, "Pepe");
	//Client* p = IcoBank->CreateClient(11, "Yess");
	//a = IcoBank->CreateAccount(10, c);
	//partner = IcoBank->CreateAccount(11, c, p);


	//cout << endl;
	//cout << a->GetOwner()->GetName() << endl;
	//cout << partner->GetPartner()->GetName() << endl;

	//cout << IcoBank->GetClient(10)->GetName() << endl;
	//cout << IcoBank->GetAccount(11)->GetPartner() << endl;
	//

	Client* o = new Client(189, "George");				
	CreditAccount* ca = new CreditAccount(1, o, 1000);	

	cout << "\n" << ca->CanWithdraw(1000) << endl;		
	Account* cr = ca;									
	cout << cr->CanWithdraw(1000) << endl;				
	cout << ca->CanWithdraw(1000) << endl;		


	cr = nullptr;
	delete cr;
	delete o;

	return 0;



	return 0;
}

