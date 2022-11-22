#include<iostream>

using namespace std ;
static int i;
class Test{
    public:
    int call(){
    i++;
    return 0;
    }

};
    
int main (){
    Test c;
    c.call();
    c.call();
    c.call();
    c.call();


    cout<<"la fonction a été appelée "<<i<< " fois"<<endl;

    return 0;
}