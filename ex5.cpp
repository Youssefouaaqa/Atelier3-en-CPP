#include<iostream>
#include<string.h>
using namespace std;

class Animal{
    public:
    int age;
    string nom;
    public:
    void set_value(string n,int x){
        nom=n;
        age=x;
    }

};
class Zebra : public Animal{
    public:
     string orgn;
    public:
     void origine(string o){
        orgn=o;
     }
     void affichage(){
        cout << "le nom de zebra est :" << nom <<endl;
        cout<< " l'age de zebra est " << age<<"  ans"<<endl; 
        cout<< " l'origine de zebra est " << orgn<< endl;
     }
    
};
class Dolphin : public Animal{
    public:
        string orgn ;
    public:  

   void origine(string o){
        orgn= o;
     }

     void affichage(){
        cout << "le nom de Dolphine est :" << nom <<endl;
        cout<< " l'age de Dolphine est :" << age<<" ans"<<endl; 
        cout<< " l'origine de Dolphine est :" << orgn << endl;
     }
    
};

int main(){
    string a,c,d,f;
    float b,e;
    cout << "Donner le nom du Zebre "<<endl;
    cin >> a;
    cout<<endl;
    cout << "Donner l'age du Zebre "<<endl;
    cin >> b;
    cout<<endl;
    cout << "Quelle est l'origine du Zebre "<<endl;
    cin >> c;
    cout<<endl;
    cout << "Donner le nom du dolphine "<<endl;
    cin >> d;
    cout<<endl;
    cout << "Donner l'age du dolphine "<<endl;
    cin >> e;
    cout<<endl;
    cout << "Quelle est l'origine du Dolphine "<<endl;
    cin >> f;
    cout<<endl;

    Zebra z;
    z.set_value(a,b);
    z.origine(c);
    z.affichage();

    Dolphin D;
    D.set_value(d, e);
    D.origine(f);
    D.affichage();

    return 0;
}