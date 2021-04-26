#pragma once
#include"Drink.h"
#include<iostream>
#include<string>
using namespace std;
class AlcoholDrinks:public Drink
{
public:
	string type;
	int amount;
	AlcoholDrinks();
	AlcoholDrinks(string name, string company, string country, int price, string type,int amount);
	void print();
};

