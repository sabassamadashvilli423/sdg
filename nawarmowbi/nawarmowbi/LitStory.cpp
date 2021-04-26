#include "LitStory.h"
#include"Story.h"
#include<iostream>
#include<fstream>
using namespace std;

LitStory::LitStory(string name, string author, string date, string genre, string type):Story(name,author,date) {
	this->genre = genre;
	this->type = type;
}
void LitStory::print() {
	ofstream fout("work.txt");
	fout << name << " " << author << " " << date <<" "<< genre<<" "<< type<< endl;
}