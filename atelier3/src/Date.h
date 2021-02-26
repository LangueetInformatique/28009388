/*
 * Date.h
 *
 *  Created on: 26 févr. 2021
 *      Author: soniabensmail
 */

#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <string>
using namespace std;

class date {
private:
	int jour;
	int mois;
	int annee;

public:
	date();
	date(int a, int b, int c);
	virtual ~date();
	bool compareTo(date d);
	void incrementer();
	string afficher() const;
	void lire() ;
    date& Incrementer();

    //Surcharge interne
    date& operator++();
    //bool operator==(date const& d1);

    //Surcharge externe
    friend bool operator==(date d1, date d2);
    friend ostream& operator<<(ostream& sortie, const date& y);
};

#endif /* DATE_H_ */
