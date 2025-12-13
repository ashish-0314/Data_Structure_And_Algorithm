#include <iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Constructing base\n";
    }
    virtual ~base(){                          // if we don't create virtual destructor here then the destructor of derived class will not be called
        cout<<"Destructing base\n";
    }
};
class derived1:public base{
    public:
    derived1(){
        cout<<"constructing derived\n";
    }
    ~derived1(){
        cout<<"destructing derived\n";
    }
};

int main(){
    base *b = new derived1;
    delete b; 
    return 0;
}