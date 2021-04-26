#include <iostream>
#include "OfficeFurniture.h"
#include"Furniture.h"
#include<fstream>
#include<vector>
using namespace std;
int main()
{
	ifstream fin("furniture.txt");
	ofstream fout("furniture.txt", fstream::app);
	vector<Furniture> a;
	vector<OfficeFurniture> b;
	Furniture t;
	OfficeFurniture k;
	string g;
	while (fin >> t.material >> t.company >> t.type >> t.price) {
		if (t.type == "office") {
			k.material = t.material;
			k.company = t.company;
			k.type = t.type;
			k.price = t.price;
			fin >> k.tipi >> k.amount;
			b.push_back(k);
		}
		else(a.push_back(t));
	}
	cin >> g;
	for (int i = 0; i < b.size(); i++) {
		if(b[i].tipi==g)
		b[i].print();
	}
}