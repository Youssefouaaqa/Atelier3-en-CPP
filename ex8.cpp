#include <iostream>
using namespace std;

//la classe de base
class media{
    protected : 
    string titre;
    public:
    virtual void imprimer(){} 
    virtual char *id(){}
};

//la classe audio heritee de la classe media
class audio : public media{
    protected : 
    float qualite;
    public:
    audio();
};

//la classe CD heritee de la classe audio
class CD : public audio{
    private:
    float storage;
    public: 
    CD();
};

//la classe cassette heritee de la classe audio
class cassette : public audio{ 
    private:
    float prix;
    public:
    cassette();
};

//la classe disque heritee de la classe audio
class disque : public audio{ 
    private:
    float storage;
    public:
    disque();
};
    
//la classe livre heritee de la classe media
class livre : public media{ 
    private:
    string prix;
    public : 
    livre();
}; 


//la classe presse heritee de la classe media
class presse : public media{
    protected :
    string nom;
    public:
    presse();
};

//la classe magazine heritee de la classe presse
class magazine : public presse{ 
    private:
    float titre;
    public:
    magazine();
};

//la classe journal heritee de la classe presse
class journal : public presse{ 
    private:
    float prix;
    public: 
    journal();
};

//la classe revue fille de la classe presse
class revue : public presse{ 
    private:
    float prix;
    public: 
    revue();
};
// fonction main
int main (){
	
	
	audio object1;
	presse object2;
	livre object3;
	CD object4;
	cassette object5;
	magazine object6;
	journal object7;
	revue object8;
    return 0;
}