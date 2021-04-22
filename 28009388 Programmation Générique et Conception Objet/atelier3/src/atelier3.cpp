//============================================================================
// Name        : atelier3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "date.h"
using namespace std;

int main() {
	date a(5,2,2000) ;
	date b(5,2,2000) ;

	if (a==b)
		cout<< "Identiques" << endl;
	else
		cout << "Differents" << endl ;

	++a;
	cout << a << endl;


	return 0;
}
