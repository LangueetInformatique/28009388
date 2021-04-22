/*
 * testDate.cpp
 *
 *  Created on: 9 févr. 2021
 *      Author: soniabensmail
 */

#include "testDate.h"
#include "iostream.h"

class date {
private:
 int jour,mois,an;
public:
 int get_jour(void) {return jour;}
 int get_mois(void) {return mois;}
 int get_an(void) {return an;}
 void saisir(void);
 void afficher(void);
 int comparer_a(date);
 void ajouter(int);
 void maintenant(void);
 int bissextile(void); //dit si l'annee est bissextile
 int longueur_mois(void); //dit combien on a de jours dans le mois actuel
 int valide(void);     //dit si la date est valide (affiche des messages si erreur)
};

void date::saisir(void)
{char c; //c contiendra le caractere de separation, sans rien tester
 do{
   cout<<"entrez la date au format jj/mm/aaaa : ";
   cin>>jour>>c>>mois>>c>>an;
   }
 while(!valide());
}
void date::afficher(void)
{
 cout<<"le "<<jour<<"/"<<mois<<"/"<<an;
}
int date::comparer_a(date d)
{
 int r;
 if(d.an>an)r=1;
 else if(d.an<an)r=-1;
 else if(d.mois>mois)r=1;
 else if(d.mois<mois)r=-1;
 else if(d.jour>jour)r=1;
 else if(d.jour<jour)r=-1;
 else r=0;
 return r;
}

void date::ajouter(int nbjours)
{
 jour+=nbjours;
 while(jour>longueur_mois())
  {
   jour-=longueur_mois();
   mois++;
   if(mois>12)
    {mois=1;an++;}
  }
 while(jour<1)
  {
   mois--;
   if(mois<1){mois=12;an--;}
   jour+=longueur_mois();
  }
}

int lng_mois[12]={31,28,31,30,31,30,31,31,30,31,30,31};
void date::maintenant(void)
{
 time_t t=time(NULL);
 t/=86400;
 an=(t*4)/(365*4+1) + 1970;
 t-=(an-1970)*365;
 t-=(an-1970)/4; //pour annee bissextile, marche jusqu'en 2100 au moins
 mois=0;
 while(t>lng_mois[mois]) {t-=lng_mois[mois];mois++;}
 mois++; //car on commence a 1, pas a 0
 jour=t;
}

int date::bissextile(void)
{
 return((an%4)==0); //retourne 0 ou 1
}
int date::longueur_mois(void)
{
 int l;
 l=lng_mois[mois-1];
 if(mois==2) l+=bissextile(); //ajoute 1 ou 0
 return l;
}
int date::valide(void)
{
 int ok=1;
 if (mois<=0 || mois>12)
  {
	 cout<<"mois invalide\n";ok=0;}
 if(jour<0 || jour>longueur_mois())
  {cout<<"jour invalide\n";ok=0;}
 return ok;
}
//surcharges des operateurs
ostream& operator<< (ostream &f, date &d)
{d.afficher();return f;}
istream& operator>> (istream&f, date &d)
{d.saisir();return f;}
date operator+ (date d, int nbjours)
{
 date res;
 res=d;
 res.ajouter(nbjours);
 return res;
}
date operator- (date d, int nbjours)
{return d+(-nbjours);}
int operator== (date &d1, date &d2)
{return d1.comparer_a(d2)==0;}
int operator!= (date &d1, date &d2)
{return d1.comparer_a(d2)!=0;}
int operator< (date &d1, date &d2)
{return d1.comparer_a(d2)>0;}
int operator<= (date &d1, date &d2)
{return d1.comparer_a(d2)>=0;}
int operator> (date &d1, date &d2)
{return d1.comparer_a(d2)<0;}
int operator>= (date &d1, date &d2)
{return d1.comparer_a(d2)<0;}
