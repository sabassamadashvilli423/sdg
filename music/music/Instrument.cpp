#include "Instrument.h"
#include<iostream>
using namespace std;
Instrument::Instrument() {
	cout << " created" << endl;
}
Instrument::Instrument(string name, string retailor, int price) {
	this->name = name;
	this->retailor = retailor;
	this->price = price;
}
void Instrument::print() {
	cout << name << " " << retailor << " " << price << endl;
}