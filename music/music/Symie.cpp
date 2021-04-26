#include "Symie.h"
#include"Instrument.h"
#include<iostream>
using namespace std;
Symie::Symie() {
	cout << " created" << endl;
}
Symie::Symie(string name, string retailor, int price, int count, string type):Instrument(name,retailor,price) {
	this->count = count;
	this->type = type;
}
void Symie::print() {
	cout << name << " " << retailor << " " << price << " " << count << " " << type << endl;
}

