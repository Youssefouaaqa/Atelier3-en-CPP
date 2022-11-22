#include<iostream>
using namespace std;

class classMere{
    public:
      void display(){
        cout<<"la class de base"<<endl;

      }
};

class classFille : public classMere{
      public:
        void display(){
          cout<<" la class fille"<<endl;
        }

};

int main(){

    classFille msg1;
    classMere msg2;

    msg1.display();
    msg2.display();


    return 0;
}