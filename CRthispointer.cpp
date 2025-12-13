#include <iostream>
using namespsace std;
class Box(){
    public:
    Box(double l = 2.0, double b = 2.0, double h = 2.0){
        cout<<"Constructor called"<<endl;
        length=l;
        bredth=b;
        height=h;
    }

    double volume (){
        return length * bredth * height;
    }

    int compare (Box box){
        return this ->volume() > box.volume();
    }

    private:
    double length;
    double bredth;
    double height;
};

int main(void){
    Box Box1(3.3,1.3,1.5);
    Box Box2(8.5,6.0,2.0);

    if(Box1.compare(Box2)){
        cout<<"Box1 is smaller than Box1"<<endl;
    }
    else{
        cout<<"Box2 is smaller than Box1"<<endl;
    }
}