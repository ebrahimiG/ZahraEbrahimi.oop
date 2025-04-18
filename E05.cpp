#include <iostream>
using namespace std;


class car{

    public:
        string name;

        virtual string start(){
            return "this is a start of ";
        }
        virtual string cluch(){
            return "this is cluch methode";
        }

    
};

class pride:public car{

    public:
        string start() override {
            return car::start() + "PRIDE!";
        }
        string cluch() override {
            return "the cluch of pride";
        }
};

class benz:public car{
    public:
        string start() override {
            return car::start() + "BENZ!!";
        }
        string cluch() override {
            return "the cluch of benz";
        }
};

int main(){

    benz b;
    string n = b.start();
    string c = b.cluch();
    pride p;
    string x = p.start();
    string y = p.cluch();
    cout<<n;
    cout<<"\n";
    cout<<c;
    cout<<"\n";
    cout<<x;
    cout<<"\n";
    cout<<y;

    return 0;
}