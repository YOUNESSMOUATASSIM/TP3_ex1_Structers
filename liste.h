
#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED
#include "employee.h"



  struct liste{

employe ee[100];
int  nb;

};

inline void initialiser_la_liste(liste* l);

inline void ajouter_emp(employe* emp,liste* l);

inline void afficher_liste(liste* l);

inline void  rechercher_emp(liste* l,char* n);

#endif // LISTE_H_INCLUDED
