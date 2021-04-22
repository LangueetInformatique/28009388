#include "Date.h"

Date::Date(){
	Date::Lire();
}

Date::Date(int j, int m, int a) {
	jour=j;
	mois=m;
	annee=a;
}

void Date::Afficher() const{
	cout<<jour<<"/"<<mois<<"/"<<annee<<endl;
}

void Date::Lire(){
	cin>>jour;
	cin>>mois;
	cin>>annee;
}

bool Date::CompareTo(const Date d) const{
	if (annee != d.annee) return true;
	if (mois != d.mois) return true;
	if (jour != d.jour) return true;
	else return false;
}

void Date::Incrementer(){
	int lmois[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if (((annee%4)==0)&&((annee%400)==0)){
		lmois[1]++;
	}
	jour ++;
	if (jour>lmois[mois-1]) {
		mois++;
		jour=1;
		if (mois==13){
			annee++;
			mois=1;
		}
	}
}
