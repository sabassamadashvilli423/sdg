#pragma once
#include<iostream>
#include<string>
using namespace std;
class Story
{
public:
	string name, author, date;
	void print();
	Story();
	Story(string name, string author, string date);

};

