#include <iostream>
#include "Drink.h"
#include "AlcoholDrinks.h"
#include "ColdDrinks.h"
#include<vector>
#include<fstream>
void asort(vector<AlcoholDrinks> b) {
	for (int j = 0; j < b.size(); j++) {
		for (int i = 0; i < b.size() - 1; i++) {
			if (b[i].amount > b[i + 1].amount)
				swap(b[i], b[i + 1]);
		}
	}
}
void csort(vector<ColdDrinks> a) {
	for (int j = 0; j < a.size(); j++) {
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i].calories < a[i + 1].calories)
				swap(a[i], a[i + 1]);
		}
	}
}
int main()
{
	ifstream fin("coldDrinks.txt");
	ofstream fout("coldDrinks.txt", fstream::app);
	ifstream fin1("alcoholDrinks.txt");
	ofstream fout1("alcoholDrinks.txt", fstream::app);
	vector<ColdDrinks> a;
	vector<AlcoholDrinks> b;
	ColdDrinks t;
	AlcoholDrinks r;
	while (fin >> t.name >> t.company >> t.country >> t.price >> t.type >> t.sugar >> t.ingredients >> t.calories) {
		if(t.sugar=="no")
		a.push_back(t);
	}
	while (fin1 >> r.name >> r.company >> r.country >> r.price >> r.type >> r.amount) {
		b.push_back(r);
	}
	for (int i = 0; i < a.size(); i++) {
		a[i].print();
	}
	cout << " ----------------" << endl;
	for (int i = 0; i < b.size(); i++) {
		b[i].print();
	}
}