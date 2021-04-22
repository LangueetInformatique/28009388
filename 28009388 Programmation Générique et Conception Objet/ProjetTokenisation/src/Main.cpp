#include "Tokenisation.h"

int main() {

	string phrase = "hello, le soleil brille, brille aujourd’hui… ";
	vector<string> vecteurDeToken;
	vecteurDeToken = listeTokensMethode1(phrase);
	short nbToken = vecteurDeToken.size();
	cout << " Les tokens de la phrace donnée en exemple sont :"<< endl;
	for (short i=0; i<nbToken;++i){
		cout <<vecteurDeToken[i]<<endl;
	}
	cout<<endl<<string(125,'*')<<endl;


	string cheminFichier = "./src/Adelaide.txt";
	string 	flux = lireFichierTexte(cheminFichier);

	cout << "Le nombre de tokens qui se trouvent dans ce text est (en utilisant la méthode brute) : "<<compterMotsMethode1(flux)<<endl;
	cout<<endl<<string(125,'*')<<endl;

	cout << "Le nombre de tokens en comptant le nombre d'espace qui se trouve dans ce text est : "<<renvoieNbreTokensMethode1(flux)<<endl;
	cout<<endl<<string(125,'*')<<endl;


	cout<< "nombre de lettre e dans notre fichier est : "<<renvoieNbreE(flux)<<endl;
	cout<<endl<<string(125,'*')<<endl;


	char lettre ='a';
	cout<< "nombre de lettre "<<lettre<<" dans notre text est : "<<renvoieNbreLettre(flux,lettre)<<endl;
	cout<<string(125,'*')<<endl;


	cout<<"Nombre de chaque caractère selon son code ASCII : \n";

	cout<<endl<<string(125,'*')<<endl;


	cout << "Le nombre de tokens qui se trouvent dans ce text (en utilisant la méthode 2) est : "
			<<renvoieNbreTokensMethode2(flux)<<endl;
	cout<<endl<<string(125,'*')<<endl;
	return 0;
}
