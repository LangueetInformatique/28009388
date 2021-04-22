/*
 * Liste.cpp
 *
 *  Created on: 22 avr. 2021
 *      Author: soniabensmail
 */
#include<cassert>
#include "Liste.h"

Liste::Liste(const int taille) {
	TailleMax = taille;
	NbElement = Courant = 0;
	TabElement = new TElement [taille];

}
Liste::~Liste () // Destructeur
{
	delete [] TabElement ;
}
void Liste::ViderListe ()
{
	NbElement = Courant = 0 ; // noter que le tableau n’est pas détruit
}
// Insère un élément à la position courante
void Liste::Inserer (const TElement & element )
{
	// le tableau ne doit pas être plein et Courant doit être à une position légale
	assert (( NbElement < TailleMax) && (Courant >= 0) && (Courant <= NbElement)) ;
	for ( int i = NbElement; i > Courant; i-- )
		TabElement[i] = TabElement[i-1] ; // Décale les éléments vers le haut
	TabElement[Courant] = element ;
	NbElement++ ;
}
void Liste::InsererFin ( const TElement & element )
{
	assert ( NbElement < TailleMax ) ; // la liste ne doit pas être pleine
	TabElement[NbElement++] = element ;
}
TElement Liste::Supprimer ()
{
	assert ( !ListeVide() && EstDansListe() ) ; // s'assurer qu'il existe
	// un élément à supprimer
	TElement temp = TabElement[Courant] ;
	for ( int i = Courant; i < NbElement-1; i++ ) // décale les éléments
		// vers le bas

		TabElement[i] = TabElement[i+1] ;
	NbElement-- ;
	return temp ;
}
void Liste::FixerTete () // rend la tête comme position courante
{
	Courant = 0 ;
}
void Liste::Precedent () // met la position courante à la position précédente
{
	Courant-- ;
}
void Liste::Suivant ()
{
	Courant++ ;
}
int Liste::Longueur () const
{
	return NbElement ;
}
void Liste::FixerPosition (const int pos )
{
	Courant = pos ;
}
void Liste::FixerValeur ( const TElement & valeur )
{
	assert ( EstDansListe() ) ; // Courant doit être à une position légale
	TabElement[Courant] = valeur ;
}
TElement Liste::ValeurCourante () const
{
	assert ( EstDansListe() ) ;
	return TabElement[Courant] ;
}
bool Liste::EstDansListe () const
{
	return ( Courant >= 0 ) && ( Courant < NbElement ) ;
}

bool Liste::ListeVide () const
{
	return NbElement == 0 ;
}
bool Liste::Trouver ( const TElement & valeur ) // recherche la valeur à partir
// de la position courante
{
	while ( EstDansListe() )
		if ( ValeurCourante() == valeur )
			return true ;
		else
			Suivant () ;
	return false ;
}




