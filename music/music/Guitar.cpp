#include "Guitar.h"
Guitar::Guitar() {
	cout << " created" << endl;
}
Guitar::Guitar(string name, string retailor, int price, int count, string type, string tipi) {
	this->name = name;
	this->retailor = retailor;
	this->price = price;
	this->count = count;
	this->type = type;
	this->tipi = tipi;
}
void Guitar::print() {
	cout << name << " " << retailor << " " << price << " " << count << " " << type << " " << tipi << endl;
}