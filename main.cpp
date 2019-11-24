#include <iostream>
#include <string.h>
#include <cstring>
#include "liste.cpp"
#include "employee.cpp"
using namespace std;

int main()
{
//Une fonction menu qui contient la boucle principale de notre menu.
//Une fonction choix qui affiche le menu et saisit le choix de l'utilisateur.
int i;
char n[20];
char p[20];
string N,P;
double s;
employe e;
liste l;

initialiser_la_liste(&l);
while(1){
do{
cout<<"--------Bonjour cher utilisateur ---------------\n";
cout<<"\t1) Ajouter un employe \n";
cout<<"\t2) Afficher la liste \n";
cout<<"\t3) Rechercher un employe \n";
cout<<"\t4) Quitter \n";

cin>>i;// ------ reçoit le choix de l'utilisateur


}while(i<1 || i>4);//---- vérifier si la valeur saisie est inclus dans notre intervalle

if(i==4){

     break;//----------Quitter
}




switch (i){

     case 1:
         cout<<"\n  donner le prenom :\t";
         cin>>P;

         //getline(cin,P);

strcpy(p,&P[0]);

         cout<<"\n  donner le nom :\t";

        //cin.get(n,9);
        //getline(cin,N);

        cin>>N;
strcpy(n,&N[0]);

         cout<<"\n  donner le salaire :\t";
         cin>>s;

        // cout<<"\n prenom :"<<p;
         //cout<<"\n  nom    :"<<n<<"\n";

//initialiser_la_liste(l);

e=cree_employe(p,n,s);

//ajouter_emp(e,&l);

ajouter_emp(&e,&l);

           break;


    case 2:

  afficher_liste(&l);

         break;
    case 3:
        cout<<"\n donner le nom chercher :\t";
        //cin.getline(n,100);
          cin>>N;
          strcpy(n,&N[0]);

    rechercher_emp(&l,n);
          break;

}
}





    return 0;
}
