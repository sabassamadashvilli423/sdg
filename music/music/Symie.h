#pragma once
#include"Instrument.h"
#include<string>
#include<iostream>
using namespace std;
class Symie:public Instrument
{
public:
	int count;
	string type;
	Symie();
	Symie(string name, string retailor, int price, int count,string type);
	void print();
};

