/*
 * date.cpp
 *
 *  Created on: 2 f�vr. 2021
 *      Author: laari
 */

#include "date.h"

date::date() {
	// TODO Auto-generated constructor stub
	cout<<"Entrez le jour"<<endl;
	cin>> jour ;
	cout<<"Entrez le mois"<<endl;
	cin>> mois ;
	cout<<"Entrez l'annee"<<endl;
	cin>> annee ;
}

date::~date() {
	// TODO Auto-generated destructor stub
}

date::date(int a, int b, int c) {
	jour= a ;
	mois= b;
	annee= c ;
}

string date::afficher() const{
    string msg = to_string(jour)+"/"+to_string(mois)+"/"+to_string(annee);
    return msg ;
//	cout << jour << " "<< mois << " " << annee << endl ;
}


bool date::compareTo(date d)  {
	if ((d.jour != jour) or (d.mois != mois) or (d.annee!=annee) ) {
		return false ;
	} else {
		return true ;
	}
}

void date::incrementer() {
	int lmois[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if ( ( (annee%4) == 0) && ((annee%400) != 0) ) {
		lmois[1]++ ;
	}
	jour ++;
	if (jour > lmois[mois-1]) {
		jour =1;
		mois++;
		if (mois == 13 ) {
			annee++;
			mois=1;
		}
	}
}
date& date::Incrementer(){
	int lmois[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if (((annee%4)==0) && ((annee%400)==0)){
		lmois[1]++;
	}
	jour ++;
	if (jour>lmois[mois-1]){
		mois++;
		jour=1;
		if (mois==13){
			annee++;
			mois=1;
		}
	}
	return *this;

}

date& date:: operator++(){
	return this-> Incrementer();
}

bool operator==(date d1, date d2){
	return d1.compareTo(d2);
}

string date::afficher()const{
	string msg = to_string(jour)+

}
