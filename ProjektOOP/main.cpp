#include <iostream>
#include "KeyValue.h"
#include "KeyArray.h"
#include "BTree.h"
#include "Invoice.h"

using namespace std;


int main() {
	
	int poc;
	cout << "Pocet objektu=";
	cin >> poc;

	KeyArray* myKeyArray = new KeyArray(poc);
	
	KeyValue* myKeyValue = myKeyArray->CreateObject(0, 0.5);
	cout << myKeyValue->GetValue() << endl;

	for (int i = 1; i < poc; i++) {
		myKeyArray->CreateObject(i, i + 0.5);
		cout << myKeyArray->SearchObject(i)->GetValue() << endl;
	}
	cout << myKeyArray->SearchObject(3)->GetValue() << endl;

	cout << myKeyArray->RemoveObject(2)->GetValue() << endl;


	BTree animals("Animals:", "animal");
	BTree flowers("Plants:", "plant");


	AnimalTree newTree(&animals, &flowers);
	newTree.AddToBinalTree("Aligator", "animal");
	newTree.AddToBinalTree("Crocodile", "animal");
	newTree.AddToBinalTree("Weed", "plant");
	newTree.AddToBinalTree("Moonglaze", "plant");
	newTree.AddToBinalTree("Big Chungus", "animal");
	newTree.AddToBinalTree("El Pigeon", "animal");
	newTree.AddToBinalTree("Sunflower", "plant");
	newTree.AddToBinalTree("Frog", "animal");
	newTree.Show();


	Invoice* inv1 = new Invoice(1, "Martin", "Trinec nam Miru", 3);
	inv1->Addthing(500, "Protein powder");		
	inv1->Addthing(50, "Yogurt");	
	inv1->Addthing(99, "Snacs");		

	cout << "Sum that Martin needs to pay: " << inv1->GetSum() << endl;		

	Invoice* inv2 = new Invoice(2, "George", "Ostrava Marianske hory", 4);	
	inv2->Addthing(1340, "Beer");		
	inv2->Addthing(500, "Vodka");	
	inv2->Addthing(25, "Food");		
	inv2->Addthing(3, "Water");	

	cout << "Sum that George needs to pay: " << inv2->GetSum() << endl;		


	delete myKeyArray;
	delete inv1;
	delete inv2;
}

