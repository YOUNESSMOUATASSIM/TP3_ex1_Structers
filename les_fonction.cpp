#include <iostream>
#include "employee.h"
#include "liste.h"

liste l;
employe e;
//*p=&nb;
/*void initialiser_la_liste(){
int i=0;

    while(1){

        l.ee[i].nom[9]="a";
        l.ee[i].prenom=;
        l.ee[i].salaire=0;
        i++;
                if(i==l.nb)
                    break;
    }

l.nb=0;
std::cout<<"\n-------------------->votre liste a �t� initialiser avec succes ! \n";

}//- Une fonction pour initialiser la liste � la liste vide.*/


void ajouter_emp(employe emp){

l.ee[l.nb].nom=emp.nom;
l.ee[l.nb].prenom=emp.prenom;
l.ee[l.nb].salaire=emp.salaire;


 std::cout<<"\n-------------------->votre employee ete ajouter avec succes ! \n\n";

 l.nb++;

}//- Une fonction pour ajouter un employ� dans la liste.


void afficher_liste(){
    std::cout<<"\n-----------------------------la liste des employees : ----------------------------------\n";

for(int i=0;i<l.nb;i++){

    std::cout<<(i+1)<<"-  prenom  : "<<l.ee[i].prenom<<"  nom  : "<<l.ee[i].nom<<"   salaire : "<<l.ee[i].salaire<<"\n";
}


}//- Une fonction pour afficher une liste d'employ�s.


void rechercher_emp(char n){

for(int i=0;i<l.nb;i++){
    if(l.ee[i].nom==n)
    std::cout<<(i+1)<<"-  prenom  : "<<l.ee[i].prenom<<"  nom  : "<<l.ee[i].nom<<"   salaire : "<<l.ee[i].salaire<<"\n";
}

}//- Une fonction pour rechercher tous les employ�s portant un nom donn�


 employe cree_employe( char p , char n, double s){



 e.prenom=p;
 e.nom=n;
 e.salaire=s;

return e;

 }//_______fonction creation employee

 void afficher_employe(char n){

if(e.nom==n){
    std::cout<<"\n   prenom  : "<<e.prenom<<"  nom  : "<<e.nom<<"   salaire : "<<e.salaire<<"\n";
}


 }//_______fonction afficher employee




