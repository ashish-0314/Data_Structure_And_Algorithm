#include <iostream>
using namespace std;
class X{
    public:
    int a;
    void f(int b){
        cout<<"The value of b is : "<<b<<endl;
    }
};
int main(){
    //declare pointer to a data member
    int X::*ptiptr = &X::a;

    //declare a pointer to a member function
    void(X::*ptfptr)(int)= &X::f;

    //create an object of a class type X
    X xobject;

    //initalize a data member 
    xobject.*ptiptr=10;

    cout<<"The value of a is : "<<xobject.*ptiptr<<endl;

    //call member function
    (xobject.*ptfptr)(20);
}