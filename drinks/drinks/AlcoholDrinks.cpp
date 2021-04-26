#include "AlcoholDrinks.h"
#include"Drink.h"
#include<iostream>
using namespace std;
AlcoholDrinks::AlcoholDrinks() {
	cout << "created" << endl;
}
AlcoholDrinks::AlcoholDrinks(string name, string company, string country, int price, string type, int amount) :Drink(name, company, country, price) {
	this->amount = amount;
	this->type = type;
}
void AlcoholDrinks::print() {
	cout << name << " " << company << " " << country << " " << price << " " << type << " " << amount << endl;
}
