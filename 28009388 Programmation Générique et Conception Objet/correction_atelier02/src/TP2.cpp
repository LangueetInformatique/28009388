//============================================================================
// Name        : TP2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

void verifier(string nomFichier,char* dateAnniv){
	ifstream fluxSortie;
	fluxSortie.open(nomFichier, ios_base::in);
	if (fluxSortie.fail())
		cerr<<"impossible de lire le fichier";
	else{
		string dateAnnivFlux;
		getline(fluxSortie, dateAnnivFlux); //On lit une ligne complète
		if (dateAnniv==dateAnnivFlux)
			cout<<"Le fichier a récupéré la bonne date";
		else
			cout <<"Les dates ne se correspondent pas, vous aviez introduit dans le fichier : "<<dateAnnivFlux;
	}
}


int main() {
	
	char s[100] ;
	cout << "Donner votre date de naissance" <<endl;
	cin.getline(s, 255); // Pour lire les espaces
	cout << s << endl ;
	ofstream fluxEntree;
	fluxEntree.open("Naissance.txt", ofstream::out); // ofstream::out ecriture
	if (fluxEntree.fail())
		cerr << "Impossible d'écrire dans le fichier\n";
	else {
		fluxEntree << s<<endl;
	}

	char d[100] ;
	cout<< "date a verifier"<< endl ;
	cin.getline(d, 255);
	verifier("Naissance.txt", d) ;
	
	return 0;
}

