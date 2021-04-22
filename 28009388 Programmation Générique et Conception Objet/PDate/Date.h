#include <iostream>
using namespace std;

class Date {
private :
	int jour, mois, annee;
	void Lire();

public :
	Date(int j, int m, int a);
	Date();
	void Incrementer();
	bool CompareTo (const Date d) const;
	void Afficher() const;
};
