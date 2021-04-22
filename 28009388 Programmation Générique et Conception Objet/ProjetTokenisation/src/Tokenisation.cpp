#include "Tokenisation.h"

vector<string> listeTokensMethode1(string flux){
	string token="";
	int nbLettres = flux.length();
		vector<string> tabTaken;
		short i(0);
		while (i<nbLettres){
			if (flux[i]!=' ' && flux[i]!='\n'){
				token=token+flux[i];
			}
			else{
			tabTaken.push_back(token);
			token="";
			}
			i++;
		}
		if (i==nbLettres) tabTaken.push_back(token);
}

int compterMotsMethode1(string flux){
	string token="";
	vector<string> tabTaken;
	tabTaken = listeTokensMethode1(flux);
	return tabTaken.size();
}

int renvoieNbreTokensMethode1(string texte) {
	int nbTokens = 0;
	if (texte.length() > 0)
	for (int i = 0; i < int(texte.length()); i++) {
		if (texte[i] == ' ') {
			nbTokens++;
		}
	}
	return nbTokens+1;
}

/*string lireFichierTexte(string cheminFichier) {
	ifstream fichier(cheminFichier);
	string contenu = "";
	if (fichier.fail()) {
		cout << "Impossible d'ouvrir le fichier" << endl;
	}
	else {
		std::stringstream buffer;
		buffer << fichier.rdbuf();
		contenu = buffer.str();
	}
	return contenu;
}*/

string lireFichierTexte(string nomFichier) {
	ifstream fichier(nomFichier);
	string contenuStr = "";
	char* contenu;
	if (fichier){
		fichier.seekg (0, fichier.end);
	    int length = fichier.tellg();
	    fichier.seekg (0, fichier.beg);
	    contenu = new char [length];
	    std::cout << "Lecture du fichier text .."<<endl;
	    fichier.read (contenu,length);

	    contenuStr = contenu;
	    delete[] contenu;
	}
	else {
		cerr<<"Erreur lors de l'ouverture du fichier";
	}
	return contenuStr;
}

int renvoieNbreE(string flux){
	short nbE=0, sizeFlux =flux.size(), i(0);
	while (i<sizeFlux){
		if (flux[i]=='e'||flux[i]=='E')
			nbE++;
		i++;
	}
	return nbE;
}

int renvoieNbreLettre(string flux, char lettre){
	short nbLettre=0, sizeFlux =flux.size(), i=0;
	while (i<sizeFlux){
		if (flux[i]==lettre)
			nbLettre++;
		i++;
	}
	return nbLettre;
}

void TableauCaractere(string flux){
	int nbChar[256];

	for (int i = 0; i < 256; i++) {
		nbChar[i] = 0;
	}

	for (int i = 0; i < int(flux.length()); i++) {
		nbChar[int(flux[i])]++;
	}
	for (int i = 0; i < 256; i++) {
		cout << "Nombre de "<<char(i)<<"(en ASCII "<<i<<" ) = "<<nbChar[i]<<"\n";
	}
	cout << endl;

}

int renvoieNbreTokensMethode2(string texte){
	short nbTokens=1;
	short size_phrase = texte.size();
	regex word_regex("[^0-9A-Za-z]");
		for(short i=0;i<size_phrase;i++) {
			string s(1,texte[i]); // convert to string otherwise regex not working
			if (regex_match(s, word_regex)) {
				nbTokens++;
			}
		}
		return nbTokens;
}

/*int renvoieNbreTokensMethode2Bis(string texte){
	regex word_regex("[^0-9A-Za-z]");
	auto words_begin = sregex_iterator(texte.begin(), texte.end(), word_regex);
	auto words_end = sregex_iterator();
	int nbTokens = distance(words_begin, words_end)+1;
	return nbTokens;
}*/

void TableauCaractereBis(string flux){
	char tabCar[255];
	short nbCar[255];

	short i(0), j(0), sizeFlux=flux.size();
	for (i=0;i<255;i++)
			tabCar[i]=i;

	for (i=0;i<255;i++)
		nbCar[i]=0;
	i=0;
	while (i<sizeFlux){
		j=0;
		while (j<255){
			if (flux[i]==tabCar[j]){
				nbCar[j]++;
				cout << flux[i];
				break;
			}
			j++;
		}
		i++;
	}
	for (i=0;i<256;i++)
		cout << "Nombre de "<<tabCar[i]<<" = "<<nbCar[i]<<"\n";
}

