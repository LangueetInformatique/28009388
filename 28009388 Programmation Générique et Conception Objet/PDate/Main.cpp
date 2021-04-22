#include "Date.h"


int main(){
	cout<<"Entrer une date de naissance pour Gabriel: ";
	Date dateGabriel;
	dateGabriel.Incrementer();
	cout<<"La date du lendemain : ";
	dateGabriel.Afficher();

	Date dateElliott(15,8,2013);
	cout<<"La date de naissance d'Elliott: ";
	dateElliott.Afficher();

	cout<<"Entrer une date de naissance pour Antoine: ";
	Date dateAntoine;
	dateAntoine.Afficher();

	if (dateGabriel.CompareTo(dateAntoine)==false)
		cout<<"Antoine est né le lendemain de la naissance de Gabriel";
	else
		cout<<"Antoine n'est pas né le lendemain de la naissance de Gabriel";
}
