#include "employee.h"
#include <iostream>
#include <string.h>

//-------------------------creation employee -------------------------//

employe cree_employe( char* p , char* n, double s){
employe e;

strcpy(e.prenom,p);
strcpy(e.nom,n);
e.salaire=s;


return e;
}


//------------------------affichage employee -----------------------------//

void afficher_employe(employe* e){

std::cout<<"\n   prenom  :"<<e->prenom<<"   nom :  "<<e->nom<<"      salaire : "<<e->salaire<<"\n";


}
