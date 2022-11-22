#include<iostream>
#include<string.h>
using namespace std;

class Personne{
    private:
    int date_de_naissance;
    string nom;
    string prenom;
    public:
    Personne(){
        date_de_naissance = 0;
        nom =' ';
        prenom =' ';

    }
    void afficher(){
        cout<<"le nom"<<nom<<endl;
        cout<<"le prenom"<<prenom<<endl;
        cout<<"la date de naissance"<<date_de_naissance<<endl;
    }
};
class Employe : public Personne {
    float salaire;
    public:
    Employe(){

    }
     void afficher(){
        cout<<"le salaire est :"<<salaire<<endl;
    }

};
class Chef : public Employe{
    string service;
    public:
    Chef() {

     } 
     void afficher(){
        cout<<"le salaire est :"<<service<<endl;
    }

};
class Directeur : public Chef{
    string societe;
    public:
    Directeur(){

    }
    void afficher(){
        cout<<"la societe est :"<<societe<<endl;
    }
};
int main(){
    Directeur prs1;
    prs1.afficher();

    return 0;
}