#include<iostream>

using namespace std;
class shape
{
public:
int l;
int h;
    shape(int L,int H){
        l=L;
        h=H;
    };
    
};

class rectangle : public shape{
    public:
    rectangle(int L,int H) : shape(L,H){}
    int area(){
        return l * h;
    }
};

class triangle : public shape{
    public:
    triangle(int L, int H) : shape(L,H){}
    int area(){
        return (l*h)/2;
    }
    
};

int main(){
rectangle rectangle(2,3);
cout<<"l'aire du rectangle est : ";
cout<<rectangle.area()<<endl;
triangle triangle(2,3);
cout<<"l'aire du triangle est : ";
cout<<triangle.area()<<endl;

return 0;
}