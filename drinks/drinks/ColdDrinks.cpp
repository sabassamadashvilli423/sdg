#include "ColdDrinks.h"
#include<iostream>
#include"Drink.h"
using namespace std;
ColdDrinks::ColdDrinks() {
	cout << " created" << endl;
}
ColdDrinks::ColdDrinks(string name, string company, string country, int price, string type, string sugar, string ingredients, int calories) : Drink(name, company, country, price) {
	this->type = type;
	this->ingredients = ingredients;
	this->calories = calories;
	this->sugar = sugar;
}
void ColdDrinks::print() {
	cout << name << " " << company << " " << country << " " << price << " " << type << " " << sugar << " " << ingredients << " " << calories << endl;
}