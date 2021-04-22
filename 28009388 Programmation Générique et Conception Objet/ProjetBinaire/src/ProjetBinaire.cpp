#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
	short tableau[3];
	for (int i=0; i<3; i++){
		cout<< "Nombre"<< endl;
		cin >> tableau[1];
	}

	ofstream fichier;
	fichier.open("TP2.bin", ofstream::out|ofstream::binary);

}
