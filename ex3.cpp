#include<iostream>
#include<cmath>
using namespace std;

class nbrComplexe{
    public:
    int a , b , c , d;

    public:
    nbrComplexe nombre_complexe(){
        cout<<"le premier nombre complexe"<<endl;
        cout<< "la partie reelle est :"<<endl;
        cin>>a ;
        cout<< "la partie imaginaire est :"<<endl;
        cin>>b ;
        cout<<"le deuxieme nombre complexe"<<endl;
         cout<< "la partie reelle est :"<<endl;
        cin>>c ;
        cout<< "la partie imaginaire est :"<<endl;
        cin>>d ;
        cout<<"le premier nombre complexe"<<endl;
        cout<<a<<"+"<<b<<"i"<<endl;
        cout<<"le deuxieme nombre complexe"<<endl;
        cout<<c<<"+"<<d<<"i"<<endl;
    }

    public:
    void somme(){

         int x=a+c;
        int   y=b+d;
            cout<<x<<"+"<<y<<"i"<<endl;
    }
    void soustraction(){
         int x=a-c;
        int y=b-d;
            cout<<x<<"+"<<y<<"i"<<endl;
    }
    void egalite(){
        if (a==c && b==d){
            cout<<"il y a de l'egalite"<<endl;
        }
        else{
        cout<<"il n y'a pas de l'egalite"<<endl;
        }
    }
    void multiplication(){
         int x,y;
        x = ((a*c)-(b*d));
        y = ((a*d)+(b*c));
        cout<<x<<"+"<<"("<<y<<")"<<"i"<<endl;

    }
    void division(){
        float x,y;
        x = ((((a)*(c))+((b)*(d)))/((pow(c,2))+(pow(d,2))));
        y = ((((a)*(d))-((b)*(c)))/((pow(c,2))+(pow(d,2))));
        if (d > 0){
                cout<<x<<"+"<<"("<<y<<")"<<"i"<<endl;}
        else{

                cout<<x<<"+"<<"-("<<y<<")"<<"i"<<endl;}
                
    }

     

};
int main(){
    int w;
    cout<<"entrez-vous deux nombre complexe"<<endl;
    nbrComplexe oper;
    oper.nombre_complexe();
    cout<<"choisissez une opertaion"<<endl;
    cout<<"(1) pour l'egalite"<<endl;
    cout<<"(2) pour l'addition"<<endl;
    cout<<"(3) pour la soustraction"<<endl;
    cout<<"(4) pour la multiplication "<<endl;
    cout<<"(5) pour la division "<<endl;
     cin>> w;
     switch(w) {
  case 1:
        oper.egalite();
    break;
  case 2:
    cout<<"la somme complexe est :";
     oper.somme();
    break;
    case 3:
    cout<<"la soustraction complexe est :";
     oper.soustraction();
    break;
    case 4:
    cout<<"la multiplication complexe est :";
     oper.multiplication();
    break;
    case 5:
    cout<<"la division complexe est :";
    oper.division();
    break;
  default: cout<<"choisissez une operation"<<endl;
    
}
    return 0;
}