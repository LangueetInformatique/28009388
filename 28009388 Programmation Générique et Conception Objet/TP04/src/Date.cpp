#include "Date.h"

Date::Date() {
	// TODO Auto-generated constructor stub
	jour = 0;
	mois = 0;
	annee = 0;
}

Date::Date(int j, int m, int a) {
	jour = j;
	mois = m;
	annee = a;
}

string Date::show(){
    return to_string(jour) + "/" + to_string(mois) + "/" + to_string(annee);
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}

