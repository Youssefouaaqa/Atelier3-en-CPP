#include<iostream>
using namespace std;
class MyClass{
    public:
      MyClass(){
        cout<<"appelle du constructeur"<<endl;
      }
    ~MyClass(){
        cout<<"appelle du destructeur"<<endl;
    }
};

int main(){
    MyClass objet;

    return 0;
}