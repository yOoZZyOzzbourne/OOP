using namespace std;
#include <iostream>
#include "ClassroomAccount.h"
#include "School.h"
#include "Student.h"

int main() {
	School* VSB = new School(10, 2);

	cout << "Welcome to the school classroom account" << endl;
	cout << "Every class has its own account used for funding school trips" << endl;
	cout << "Deposits to classroom" << endl;

	VSB->CreateStudent(1, "Y");
	Student* firstS = VSB->GetStudent(1);  
	ClassroomAccount* Classroom1 = VSB->CreateClassroomAccount(1, firstS); 
	/*Student 1 Deposit */ {
		cout << "Student depositing:";
		cout << "\t";
		cout << VSB->GetStudent(1)->GetName();
		cout << " \t";
		cout << "to classroom:";
		cout << "\t";
		cout << "Classroom1" ;
		cout << " \t";
		cout << "amount:";
		cout << "\t";
		
	}
	Classroom1->Deposit(1000); //vložení na úèet
	

	VSB->CreateStudent(2, "Yy");
	Student* secondS = VSB->GetStudent(2); 
	/*Student 2 Deposit */ {
		cout << "Student depositing:";
		cout << "\t";
		cout << VSB->GetStudent(2)->GetName();
		cout << " \t";
		cout << "to classroom:";
		cout << "\t";
		cout << "Classroom1";
		cout << " \t";
		cout << "amount:";
		cout << "\t";

	}
	Classroom1->Deposit(1000); //vložení na úèet


	VSB->CreateStudent(3, "Yyy");
	Student* thirdS = VSB->GetStudent(3);  
	ClassroomAccount* Classroom2 = VSB->CreateClassroomAccount(2, thirdS); 
	/*Student 3 Deposit */ {
		cout << "Student depositing:";
		cout << "\t";
		cout << VSB->GetStudent(3)->GetName();
		cout << " \t";
		cout << "to classroom:";
		cout << "\t";
		cout << "Classroom2";
		cout << " \t";
		cout << "amount:";
		cout << "\t";

	}
	Classroom2->Deposit(1000); //vložení na úèet



	cout << "Classroom" << " \t \t " << "Balance" << " \t " << endl;
	/*Cout - Classroom 1*/ {
		cout << "Classroom1";
		cout << " \t \t ";
		cout << VSB->GetAccount(1)->GetBalance();
		cout << "\t \t ";
		cout << endl;
							}
	/*Cout - Classroom 2*/ {
		cout << "Classroom2";
		cout << " \t \t ";
		cout << VSB->GetAccount(2)->GetBalance();
		cout << "\t \t "; 
		cout << endl; }
	cout << endl << endl;


	cout << "Withdraws" << endl;
	cout << "Classroom" << " \t \t " << "Balance after withdraw" << " \t " << "Withdraw amount " << endl;

	Classroom1->Withdraw(1000);
	/*Cout - Classroom1 - withdraws*/ {
		cout << "Classroom1";
		cout << "\t \t \t \t  ";
		cout << VSB->GetAccount(1)->GetBalance();
		cout << endl; }

	Classroom2->Withdraw(5000);
	/*Cout - Classroom2 - withdraws*/ {
		cout << "Classroom2";
		cout << "\t \t \t \t  ";
		cout << VSB->GetAccount(2)->GetBalance();
		cout << endl; }


	cout << endl << endl << endl;
	return 0;
}