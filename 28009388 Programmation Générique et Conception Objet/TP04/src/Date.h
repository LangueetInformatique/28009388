#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int jour;
	int mois;
	int annee;
public:
	Date();
	Date(int j, int m, int a);
	string show();
	virtual ~Date();
};

#endif /* DATE_H_ */


