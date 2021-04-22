#include "Etudiant.h"

Etudiant::Etudiant() {
	// TODO Auto-generated constructor stub
	nom = "";
	prenom = "";
	age = 0;
}

Etudiant::Etudiant(string n, string p, int a) {
	nom = n;
	prenom = p;
	age = a;
}

string Etudiant::show() {
    return nom + ", " + prenom + ", " + to_string(age);
}

Etudiant::~Etudiant() {
	// TODO Auto-generated destructor stub
}




