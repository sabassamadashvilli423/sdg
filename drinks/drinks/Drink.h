#pragma once
#include<iostream>
#include<string>
using namespace std;
class Drink
{
public:
	string name, company, country;
	int price;
	Drink();
	Drink(string name, string company, string country, int price);
	void print();
};

