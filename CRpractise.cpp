#include <iostream>
using namespace std;
class Apple{
    public:
    int nA;
    void get_Apple(){
        cout<<"Enter the no of apple : ";
        cin>>nA;
    }
};

class Banana{
    public:
    int nB;
    void get_Banana(){
        cout<<"Enter the no of banana : ";
        cin>>nB;
    }
};

class fruits: public Apple, public Banana{
    public:
    int nF;
    fruits() {
        get_Apple();
        get_Banana();
        nF=nA+nB;
    }
    void show_fruits(){
        cout<<"Total fruits: "<< nF<< endl;
    }
};
int main(){
    fruits obj1;
    obj1.show_fruits();
}