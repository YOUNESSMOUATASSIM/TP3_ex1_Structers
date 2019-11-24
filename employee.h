#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED



  struct employe{//________creation structure employee

char prenom[20];
char nom[20];
double salaire;
};
inline employe cree_employe( char* p , char* n, double s);
inline void afficher_employe(employe* e);

#endif // EMPLOYEE_H_INCLUDED
