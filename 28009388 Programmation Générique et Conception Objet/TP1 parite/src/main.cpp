#include<iostream>
using namespace std;
#include"date.h"
using namespace std;
 int main(){
	 cout<<"Entrer une date pour sonia";
	 date datSonia;
	 date dateTarik(06,04,2000);
	 cout<<"Entrer une date pour yana";

	 date* dateYana = new date;
	  dateTarik.Aficher();
	  dateYana->Aficher();

	  dateSonia.Incrementer();
	  dateSonia.Afficher();

	  if (dateSonia.CompareTo(*dateYana) == false)
		  cout<<"Date Identique";
	  else
		  cout<<"Date non Identique";

 }

