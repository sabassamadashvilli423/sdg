#pragma once
#include"Story.h"
class LitStory:public Story
{
public:
	string genre, type;
	LitStory(string name, string author, string date, string genre, string type);
	void print();
};

