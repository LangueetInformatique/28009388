#ifndef ETUDIANT_H_
#define ETUDIANT_H_

#include <iostream>
#include <string>
using namespace std;

class Etudiant {
private:
	string nom;
	string prenom;
	int age;
public:
	Etudiant();
	Etudiant(string n, string p, int a);
	string show();
	virtual ~Etudiant();
};

#endif /* ETUDIANT_H_ */
