#include <iostream>
using namespace std;
class base{
    public:
    int func1(int a , int b){
        return a*b;
    }

    int func1(int a , int b){
        return a*b*10;
    }
    
};
class derived1: public base{
    public:
    int func1(int a , int b){
        return a*b*10;
    }
};

int main(){

}


#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
class abc{
    private:
    int x;
    int y;
    int z;
    public:
    abc(int a , int b, int c){
        x= a;
        y = b;
        z = c;
    }
    void display(){
        cout<<x<<endl;
        cout<<y<<endl;
        cout<<z<<endl;
    }
    void operator+(){
        x = +x;
        y = +y;
        z = +z;
    }
    void sum(){
        cout<< x+y+z;
    }
};

int main(){
    abc s(10,-20, 30);
    cout<<"s: ";
    s.display();
    +s;
    cout<<"s: ";
    s.display();
    s.sum();
    return 0;
}