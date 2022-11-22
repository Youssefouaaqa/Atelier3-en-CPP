#include<iostream>
#include<cmath>
using namespace std;

class vecteur3d{
    private:
    float x,y,z;
    public:
    vecteur3d(float a=0,float b=0,float c=0){
        x=a;
        y=b;
        z=c;
       
    }
    vecteur3d(vecteur3d & v){
        x=v.x;
        y=v.y;
        z=v.z;

    }
    void affichage(){
        cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;

    }
    void somme(const vecteur3d & v){
        vecteur3d som;
        som.x=x+v.x;
        som.y=y+v.y;
        som.z=z+v.z;
        cout<<"vs= ("<<som.x<<"+"<<som.y<<"+"<<som.z<<")"<<endl;
    }
    void produit(const vecteur3d & v){
        cout<<"vp="<<x*v.y+y*v.z+z*v.z<<endl;
    }
    void coincidence(const vecteur3d & v){
        if(x == v.x && y == v.y && z == v.z)
        cout<<"les deux vecteur coincide"<<endl;
        else
        cout<<"les deux vecteur ne coincide pas"<<endl;
    }
    float norme(){
        return sqrt(x*x + y*y + z*z);
    }
    //retourner le vecteur qui a la plus grande norme: par valeur
    vecteur3d grnorme(vecteur3d v){
        
        if (this->norme() > v.norme() )
            return *this;

        return v;
    }
    //retourner le vecteur qui a la plus grande norme: par adresse
    vecteur3d * grdnorme(vecteur3d * v){
        
        if (this->norme() > v->norme())
            return this;

        return v;
    }
    //retourner le vecteur qui a la plus grande norme: par referance
    vecteur3d & gdnorme(vecteur3d &v){
        
        if (this->norme() > v.norme())
            return  *this;

        return v;

    }
 
};
int main(){
    vecteur3d v1(2,2,2);
    vecteur3d v2(1,2,3);
    cout<<"la premiere vecteur est: v1";
    v1.affichage();
    cout<<"la deuxieme vecteur est: v2";
    v2.affichage();
    cout<<"la somme des deux vecteurs est ";v1.somme(v2);
    cout<<"le produit des deux vecteurs est ";v1.produit(v2);
    v1.coincidence(v2);
    cout<<"la norme du vecture est: ";
    cout<<endl;
    cout << "le resultat est renvoye par valeur: "<<endl;
    v1.grnorme(v2).affichage();
    cout << "le resultat est renvoye par address: "<<endl;
     (v1.grdnorme(&v2))->affichage();
    cout << "le resultat est renvoye par reference: "<<endl;
     v1.gdnorme(v2).affichage();

    return 0;
}