#include "liste.h"
#include <iostream>
#include <string.h>


//-----------------Initialisation de liste---------------------//
void initialiser_la_liste(liste* l){

l->nb=0;

}


//-----------------l' ajout d employee dans la liste ---------------------//

void ajouter_emp(employe* emp,liste* l){

l->ee[l->nb]=*emp;

l->nb++;


}


//-----------------l affichage  des elements du liste---------------------//

void afficher_liste(liste* l){

for(int i=0;i<l->nb;i++)
{
std::cout<<"\n"<<i+1<<" prenom :   "<<l->ee[i].prenom<<"  nom :  "<<l->ee[i].nom<<"  salaire  :   "<<l->ee[i].salaire<<"\n";
}

}


//-----------------Recherche d employee dans la liste par son nom  ---------------------//

void  rechercher_emp(liste* l,char* n){
int cmp=0;
for(int i=0;i<l->nb;i++)
{
    if(strcmp(l->ee[i].nom,n)==0){

       cmp++;
    }


}
 if(cmp!=0){
        std::cout<<"\n l employee saisie est existe !\n";
    }
     else
        std::cout<<"\n l employee saisie n'est existe pas  !\n";




}
