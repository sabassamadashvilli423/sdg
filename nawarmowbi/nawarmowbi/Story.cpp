#include "Story.h"
#include<iostream>
#include<fstream>
using namespace std;
Story::Story() {
	ofstream fout("work.txt");
	fout << " created " << endl;
}
Story::Story(string name, string author, string date) {
	this->name = name;
	this->author = author;
	this->date = date;
}
void Story::print() {
	ofstream fout("work.txt");
	fout << name << " " << author << " " << date << endl;
}
