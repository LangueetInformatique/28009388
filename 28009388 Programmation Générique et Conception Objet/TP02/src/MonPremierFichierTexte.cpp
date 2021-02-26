//============================================================================
// Name        : TP02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream fichier("Naissance.txt", ios::in);
	if(fichier){
		char caract('');
		string nom = "Sonia";
		int age = "25";
		fichier <<"Je suis ne le : "<< 8 <<'/'<< 3 << '/' << 1995 << endl;
		fichier.close();


	}
}
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ofstream fichier("MonPremierFichierText.txt", ios::out | ios::trunc);  // ouverture en écriture avec effacement du fichier ouvert


	if(fichier)
	{
		string nom = "sonia";
		int age = 25;
		fichier <<"Je m'appelle" <<" "<< nom  <<" "<<"Je suis né le : " << 8 << '/' << 3 << '/' << 1995 << endl;
		/*fichier << "Bonjour, " << nom << ". Vous avez " << age << " ans.";*/

		fichier.close();
	}
	else
		cerr << "Impossible d'ouvrir le fichier !" << endl;

	return 0;
}
