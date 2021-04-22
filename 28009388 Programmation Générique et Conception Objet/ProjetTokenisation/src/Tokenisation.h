/*
 * Tokenisation.h
 *
 *  Created on: 26 févr. 2021
 *      Author: soniabensmail
 */

#ifndef TOKENISATION_H_
#define TOKENISATION_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <regex>
using namespace std;


vector<string> listeTokensMethode1(string flux);

int compterMotsMethode1(string flux);

int renvoieNbreTokensMethode1(string flux);

string lireFichierTexte(string nomFichier);

int renvoieNbreE(string flux);

int renvoieNbreLettre(string flux, char lettre);

void TableauCaractere(string flux);

int renvoieNbreTokensMethode2(string flux);


int renvoieNbreTokensMethode2Bis(string flux);


#endif
