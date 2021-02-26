/*
 * datedenaissance.cpp
 *
 *  Created on: 11 févr. 2021
 *      Author: soniabensmail
 */

#include <iostream>
#include<fstream>


using namespace std;

void verifier(string nomFichier, char* dateAnniv){
	ifstream fichier;
	char contenu[100];
	fichier.open(nomFichier, ios::in);
	if (fichier.fail())
		cerr <<"Erreur ouvertre";
	else{
		getline(fichier, contenu);
		if (dateAnniv == contenu)
			cout<< "identques"<< endl;
		else{
			cout<< "differentes"<< endl;
		}

	}
int main() {
	char s[100];
	cout <<"Donnez une date à comparer"<< endl;
	cin.getline(s, 100);

	cout << s << endl;
	ofstream flux;
	flux.open("Naissance.txt", ios::out);

	if (flux.fail())
		cerr <<'Erreur';
	else

		flux << s << endl;



	flux.close();
	verifier("Naissance.txt", s);
	return 0;

	}

