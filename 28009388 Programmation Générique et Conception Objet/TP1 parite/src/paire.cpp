#include "paire.h"

int main(){
	short n = 0;
	cout << "donnez un entier" << endl ;
	cin >> n ;



	if (parite(n) == true)
		cout <<"le nombre est paire"<< endl;
	else
		cout << "le nombre est impaire"<< endl;
	return 0;

}
