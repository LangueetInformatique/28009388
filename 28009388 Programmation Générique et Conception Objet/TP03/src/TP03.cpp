#include <iostream>
#include "date.h"

using namespace std;
int main (){
	date a (5,6,2000);
	date b (05,6,2000);
	if (a.compareTo(b) == true)
		cout <<"Identiques"<< endl;
	else
		cout<<"Differents"<< endl;

	a.incrementer();
	cout << a.afficher()<< endl;
	a=a.Incrementer();
	cout<<a.afficher()<< endl;
	++a;
	cout<<a.afficher()<< endl;

	return 0;


}



