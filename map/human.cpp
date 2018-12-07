#include "human.h"


human::human(string name, bool sex)
{
	this->name = name;
	this->sex = sex;
}


bool operator<(human h, human h1)
{
	return h.name < h1.name;
}
