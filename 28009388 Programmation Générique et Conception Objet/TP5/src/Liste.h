/*
 * Liste.h
 *
 *  Created on: 22 avr. 2021
 *      Author: soniabensmail
 */

#ifndef LISTE_H_
#define LISTE_H_

#define Taille_de_Liste 100
template <classe T> ;
class Liste {
public :
 Liste ( const int = Taille_de_Liste ) ; // Constructeur
 ~Liste () ; // Destructeur
 void ViderListe () ; // Vide la liste
 void Inserer ( const TElement & ) ; // insère un élément à la position courante
 void InsererFin ( const TElement & ) ;// insère un élément à la fin de la liste
 TElement Supprimer () ; // Supprime et retourne l'élément à la position courante
 void FixerTete () ; // met la position courante à la tête de la liste
 void Precedent () ; // Déplace la position courante à la position précédente
 void Suivant () ; // Déplace la position courante à la position suivante
 int Longueur () const ; // retourne la longueur courante de la liste
 void FixerPosition ( const int ) ; // met position courante à position donnée
 void FixerValeur ( const TElement & ) ; // met à jour la valeur à la position courante
 TElement ValeurCourante () const ;//retourne la valeur d'élément à la position courante.
 bool ListeVide () const ; // retourne vrai si la liste est vide
 bool EstDansListe () const ; //retourne vrai si position courante est dans la liste
 bool Trouver ( const TElement & ) ;// recherche une valeur dans la
// liste à partir de la position courante.
 private :
 T TailleMax ; // taille maximum de la liste
 T NbElement ; // nombre d'éléments effectifs dans la liste
 T Courant ; // position de l'élément courant
 T * TabElement ; // tableau contenant les éléments de la liste
} ;
#endif
