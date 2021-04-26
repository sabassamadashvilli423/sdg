#pragma once
#include<string>
#include<iostream>
using namespace std;
class Instrument
{
public:
	string name, retailor;
	int price;
	Instrument();
	Instrument(string name, string retailor, int price);
	void print();
};

