// #include <iostream>
// using namespace std;
// class B1{
//     public:
//         void show_data(){
//             cout<<"\n In the Base class 1 ";
//         }
// };

// class B2{
//     public:
//         void show_data(){
//             cout<<"\n In the Base class 2 ";
//         }
// };

// class D:public B1 , public B2{
//     public:
//         // void diplay(){
//         //     B1::show_data();
//         //     B2::show_data();
//         // }
// };

// int main(){
//     D obj;
//     //obj.show_data();   // Ambiguity Problem
//     //Solution
//     obj.B1::show_data();
//     obj.B2::show_data();

//     // or
//     //obj.display();

// }





//virtual Base class solution for ambiguity problem in hybrid inhertance 

#include <iostream>
using namespace std;
class B {
    protected:
    int x;
    public:
    void get_dataB(){
        cout<<"\n Enter the value of x: ";
        cin>>x;
    }
};

class DB1:public virtual B{
    protected:
    int y;
    public:
    void get_dataDB1(){
        cout<<"\n Enter the value of y: ";
        cin>>y;
    }
};



class DB2:public virtual B{
    protected:
    int z;
    public:
    void get_dataDB2(){
        cout<<"\n Enter the value of z: ";
        cin>>z;
    }
};


class D:public DB1, public DB2{
    public:
    void sum(){
        int result;
        result = x+y+z ;
        cout<<"\n Result is : "<<result;
    }
};

int main(){
    D obj1;
    obj1.get_dataB();
    obj1.get_dataDB1();
    obj1.get_dataDB2();
    obj1.sum();

    return 0;
}
