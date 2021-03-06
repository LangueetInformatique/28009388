#include "date.h"
// Constructeur vide
date::date() {
	jour = mois = annee = 0;
}

// Constructeur avec initialisation
date::date(int j, int m, int a) {
	jour = j;
	mois = m;
	annee = a;
}
// accesseurs
int date::getjour() const {
	return jour;
}
int date::getmois() const {
	return mois;
}
int date::getannee() const {
	return annee;
}

// increment d'une date
void date::incrementer() {
	int lmois[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// prise en compte des annees bissextiles
	if (((annee % 4) == 0) && ((annee % 400) != 0))
// si l'annee est bissextile, on incremente le mois de fevrier de un jour
		lmois[1]++;
	// ajout d'un jour
	jour++;
	// mois-1 --> nombre de jours du mois choisi
	if (jour > lmois[mois - 1]) {
		jour = 1;
		mois++;
		if (mois == 13) {
			annee++;
			mois = 1;
		} //fin if
	} //fin if
}

// affichage d'une date
void date::afficher() {
	cout << jour << "/" << mois << "/" << annee;
}

// saisie d'une date
void date::saisir() {
	cin >> jour >> mois >> annee;
}

// redefinition de l'envoi sur le flot de sortie
//(fonction amie de la classe Date)
//utilisation superflue des accesseurs !!

ostream & operator <<(ostream & out, const Date & y) {
	out << y.getjour() << "/" << y.getmois() << "/" << y.getannee();
	return out;
}

// redefinition de la reception sur le flot d'entree
//(fonction amie de la classe Date)
istream & operator >>(istream & in, Date & y) {
	cout << "Entrez une date (jour mois annee)" << endl;
	in >> y.jour >> y.mois >> y.annee;
	return in;
}

// redefinition de l'operateur ++
void date::operator ++() {
	incrementer();
}

// redefinition de l'operateur <
bool d
ate::operator <(const Date & y) const {
	if (annee < y.annee)
		return true;
	if (annee > y.annee)
		return false;
	if (mois < y.mois)
		return true;
	if (mois > y.mois)
		return false;
	if (jour < y.jour)
		return true;
	return false;
}

// redefinition de l'operateur !=
bool date::operator !=(const Date & y) const {
	if (annee != y.annee)
		return true;
	if (mois != y.mois)
		return true;
	if (jour != y.jour)
		return true;
	return false;
}
