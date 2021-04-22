//============================================================================
// Name        : TP2_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>

using namespace std;

void lire_entier(string nomFichier, int position) {
	// Ouverture du fichier binaire
	ifstream fichier;
	fichier.open(nomFichier, ifstream::binary);
	if (fichier.fail()) {
		cerr << "Impossible d'ouvrir le fichier" << endl;
	}

	else {
		// On se met au début du fichier
		fichier.seekg(0, fichier.beg);

		// Lecture d'un nombre à la position donnée
		// Besoin de multiplier par la taille d'un short
		// On utilise position-1 pour pouvoir avoir la position 1 avec l'indice 1 et pas avec 0
		short nb;
		position = (position-1) * sizeof(short);
		fichier.seekg(position, fichier.beg);
		fichier.read((char*) &nb, sizeof(nb));
		fichier.close();
		cout << nb << endl;
	}
}

void modifier_entier(string nomFichier, int position, short a) {
	fstream fichier;
	fichier.open(nomFichier, ios::in|ios::out|ios::binary);
	if (fichier.fail()) {
		cerr << "Impossible d'ouvrir le fichier" << endl;
	}
	else {
		position = (position-1) * sizeof(short);
		fichier.seekg(position, fichier.beg);
		fichier.write((char*) &a, sizeof(a));
		fichier.flush();
		fichier.close();
	}
}


void Copie_fichier_binaire(string fichierEntree, string fichierSortie) {
	ifstream entree;
	entree.open(fichierEntree, ifstream::binary);
	ofstream sortie;
	sortie.open(fichierSortie, ofstream::binary);
	if (entree.fail() || sortie.fail()) {
		cerr << "Impossible d'accéder à l'un des fichiers" << endl;
	}
	else {
		entree.seekg(0, entree.end);
		int nbCar = entree.tellg();

		entree.seekg(0, entree.beg);
		char c;
		for(int i = 0; i < nbCar; i++) {
			entree.read((char*) &c, sizeof(c));
			sortie.write((char*) &c, sizeof(c));
		}
		cout << "Fichier copié" << endl;
		entree.close();
		sortie.close();
	}
}


int main() {

	// Construction du tableau
	int taille = 20;
	short tab[taille];
	for(int i = 0; i < taille; i++) {
		cout << "Nombre ? ";
		cin >> tab[i];
	}
	// Ouverture et enregistrement dans un fichier binaire
	ofstream fichier;
	fichier.open("test.bin", ofstream::binary);
	if (fichier.fail()) {
		cerr << "Impossible d'écrire dans le fichier" << endl;
	}
	else {
		for(int i = 0; i < taille; i++) {
			fichier.write((char*) &tab[i], sizeof(tab[i]));
		}
		fichier.close();
	}
//////////////////////////////////////////////////////////:

	lire_entier("test.bin", 1);
	cout << "Nouvelle valeur pour remplacer l'entier qui se trouve dans la position 1 : ";
	short val;
	cin >> val;
	modifier_entier("test.bin", 1 , val);
	lire_entier("test.bin", 1);

	string nomFichier2 = "CopieTest.bin";
	Copie_fichier_binaire("test.bin", nomFichier2);
	cout << "le nouveau tableau contient les entiers suivant :";
	lire_entier("CopieTest.bin", 1);

	
	return 0;
}
