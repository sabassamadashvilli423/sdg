#pragma once
#include<iostream>
#include"Symie.h"
#include<string>
using namespace std;
class Guitar:public Symie
{
public:
	string tipi;
	Guitar();
	Guitar(string name, string retailor, int price, int count, string type, string tipi);
	void print();
};

