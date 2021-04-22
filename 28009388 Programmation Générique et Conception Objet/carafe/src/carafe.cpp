/*
 * carafe.cpp
 *
 *  Created on: 18 févr. 2021
 *      Author: soniabensmail
 */

#include "carafe.h"

carafe::carafe() {
	// TODO Auto-generated constructor stub

}

carafe::~carafe() {
	// TODO Auto-generated destructor stub
}

carafe:: carafe(int a, int b){
	contenu = a;
	capacite = b;

}

void carafe::vider(){
	contenu = 0;
}

void carafe:: remplir(){
	contenu = capacite;
}

int carafe::getContenu(){
	return contenu;
}

int carafe::getCapacite(){
	return capacite,
}

void carafe::transvaser(carafe& c){
	if ((contenu+ c.contenu) <= c.capacite)
		c.contenu +=contenu;
	contenu = 0;
}else{

}
