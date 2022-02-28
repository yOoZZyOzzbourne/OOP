#pragma once
#include<iostream>
using namespace std;

class BTree{
private:
    string value;
    string key;
    BTree* animal;
    BTree* plants;
public:
    BTree(string value, string key) {
        this->value = value;
        this->key = key;
        this->animal = nullptr;
        this->plants = nullptr;
    }

    string GetVal() {

        return this->value;

    }
    string GetKey() {
        return this->key;
    }

    void LinkAnimal(BTree* linkTo) {
        if (!this->animal) {

            this->animal = linkTo;

        }
        else(this->animal->LinkAnimal(linkTo));

    }
    void LinkPlants(BTree* linkTo) {
        if (!this->plants) {

            this->plants = linkTo;

        }
        else(this->plants->LinkPlants(linkTo));

    }

    void Show() {
       
        cout << this->value;
        
         if (this->animal) {
            cout << endl;
            this->animal->Show();
        }
        else if (this->plants) {
            cout << endl ;
            this->plants->Show();
        }
        else cout << "\n\n" << endl;

    }
};

class AnimalTree {
private:
    BTree* animal;
    BTree* plants;

public:
    AnimalTree(BTree* animal, BTree* plants) {
        this->animal = animal;
        this->plants = plants;


    }

    BTree* GetAnimal() {
        return this->animal;
    }
    BTree* GetPlants() {
        return this->plants;
    }

    void AddToBinalTree(string value, string key) {

        if (this->animal && this->animal->GetKey() == key) this->animal->LinkAnimal(new BTree(value, key));
        else if (this->plants && this->plants->GetKey() == key) this->plants->LinkPlants(new BTree(value, key));
    }
    void Show() {
        cout << endl << "The Animal Tree:" << endl;
        this->animal->Show();
        this->plants->Show();

    }

};
