#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class human
{
public:

	string name;
	bool sex;

	human(string name, bool sex);

	//bool operator<(human h);
};

bool operator<(human h, human h1);

