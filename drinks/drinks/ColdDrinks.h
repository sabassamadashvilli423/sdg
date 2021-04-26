#pragma once
#include"Drink.h"
#include<iostream>
#include<string>
using namespace std;
class ColdDrinks:public Drink
{
public:
	string type, sugar, ingredients;
	int calories;
	ColdDrinks();
	ColdDrinks(string name, string company, string country, int price, string type, string sugar, string ingredients, int calories);
	void print();
};

