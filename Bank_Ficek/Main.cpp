#include "Client.h"
#include "Bank.h"
#include "Account.h"
#include <iostream>

using namespace std;

int main() {

	cout << "Welcome to the banking system" << endl;

	Bank* IcoBank = new Bank(5, 5);

	IcoBank->CreateClient(1, "Ico");  //vytvo¯enÌ klienta a jeho ˙Ëtu
	Client* firstC = IcoBank->GetClient(1);  //promÏnn· first client
	Account* firstA = IcoBank->CreateAccount(1, firstC); //promÏnn· first account
	firstA->Deposit(1000); //vloûenÌ na ˙Ëet

	IcoBank->CreateClient(2, "Kemol");
	Client* secondC = IcoBank->GetClient(2);  //promÏnn· client
	Account* secondA = IcoBank->CreateAccount(2, secondC, 1.5); //promÏnn· second account
	secondA->Deposit(10000);

	IcoBank->CreateClient(3, "Georgi");
	Client* thirdC = IcoBank->GetClient(3);  //promÏnn· client
	Account* thirdA = IcoBank->CreateAccount(3, thirdC, 2.0); //promÏnn· third account
	thirdA->Deposit(40200);

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
	


	return 0;
}

/*

	cout << IcoBank->GetClient(1)->GetName() << " \t \t \t " << IcoBank->GetAccount(1)->GetBalance() << "\t \t " << IcoBank->GetAccount(1)->GetInterestRate() << endl;
	cout << IcoBank->GetClient(2)->GetName() << " \t \t \t " << IcoBank->GetAccount(2)->GetBalance() << " \t \t " << IcoBank->GetAccount(2)->GetInterestRate() << endl;
	cout << IcoBank->GetClient(3)->GetName() << " \t \t \t " << IcoBank->GetAccount(3)->GetBalance() << " \t \t " << IcoBank->GetAccount(3)->GetInterestRate() << endl;

*/