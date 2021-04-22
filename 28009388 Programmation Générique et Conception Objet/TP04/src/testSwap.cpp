#include <iostream>
#include "swap.h"
#include "Date.h"
#include "Etudiant.h"
using namespace std;

int main()
{
	/*float a, b;
	cout << "Entrez deux réels : ";
	cin >> a >> b;
	cout << "Avant l'échange : a = " << a << ", b = " << b;
	//swap(&a,&b);
	swap1(a,b);
	cout << endl;
	cout << "Après l'échange : a = " << a << ", b = " << b;*/

	Date d1(11,12,13), d2(14,12,16);
	cout << "Avant l'échange : d1 = " << d1.show() << ", d2 = " << d2.show() << endl;
	swap(&d1,&d2);
	//swap1(d1,d2);
	cout << "Après l'échange : d1 = " << d1.show() << ", d2 = " << d2.show();

	/*Etudiant e1("NOM1","Prenom1",1), e2("NOM2","Prenom2",2);
	cout << "Avant l'échange : e1 = " << e1.show() << ", e2 = " << e2.show() << endl;
	swap(&e1,&e2);
	//swap1(d1,d2);
	cout << "Après l'échange : e1 = " << e1.show() << ", e2 = " << e2.show();*/
	return 0;
}

