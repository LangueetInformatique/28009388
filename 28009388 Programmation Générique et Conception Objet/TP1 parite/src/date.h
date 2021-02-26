#include<iostream>
using namespace std;

class date{
private:
	int jour, mois, annee;
	void lire();
public:
	date(int j, int m, int a);
	void Incrementer();
	bool CompareTo(const date & d)const;
	void Aficher() const;
};


