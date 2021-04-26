#include "Drink.h"
#include<iostream>
using namespace std;
Drink::Drink() {
	cout << "created" << endl;
}
Drink::Drink(string name, string company, string country, int price) {
	this->company = company;
	this->country = country;
	this->name = name;
	this->price = price;

}
void Drink::print() {
	cout << name << " " << company << " " << country << " " << price << endl;
}
