#include <iostream>
#include"Guitar.h"
#include<vector>
#include<fstream>
using namespace std;
void gsort(vector<Guitar>&a) {
	for (int j = 0; j < a.size(); j++) {
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i].price > a[i + 1].price)
				swap(a[i], a[i + 1]);
		}
	}
}
int main()
{
	ifstream fin("guitars.txt");
	vector<Guitar> a;
	Guitar t;
	while (fin >> t.name >> t.retailor >> t.price >> t.count >> t.type >> t.tipi) {
		a.push_back(t);
	}
	gsort(a);
	for (int i = 0; i < a.size(); i++) {
		a[i].print();
	}
}