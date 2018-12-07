#include "human.h"

void main()
{
	setlocale(LC_ALL, "ru");
	map<human, string> m;
	human h1("Ivanov", 1);
	human h2("Petrov", 1);
	human h3("Petrova", 0);

	m[h1] = "+77071111111";
	m[h2] = "+77072222222";
	m[h3] = "+77073333333";

	cout << m[h1] << endl;
	cout << m[h2] << endl;
	cout << m[h3] << endl;
	cout << "4." << endl;
	multimap<string, string> dog;

	dog.insert(make_pair("Лайка", "Тузик"));
	dog.insert(make_pair("Лайка", "Вася"));
	dog.insert(make_pair("Авчарка", "Бим"));
	dog.insert(make_pair("Авчарка", "Бом"));

	int c = 0;

	auto it = dog.equal_range("Лайка");
	//if (it != dog.end())
	//	c++;
	//cout << (*it).second << endl;
	for (auto it1 = it.first; it1 != it.second; it1++)
	{
		cout << it1->first << " " << it1->second << endl;
	}	
	cout << "Колличество собак: " << dog.count("Лайка") << endl;
	cout << "5." << endl;

	multimap<int, string> hm;
	hm.insert(make_pair(25, "Petrov"));
	hm.insert(make_pair(15, "Ivanov"));
	hm.insert(make_pair(21, "Ivanova"));
	hm.insert(make_pair(18, "Petrova"));
	auto it1 = hm.equal_range(20);
	for (auto it2 = it1.first; it2 != hm.end(); it2++)
	{
		cout << it2->first<<" "<<it2->second << endl;
	}	
	system("pause");
}