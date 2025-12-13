// #include <iostream>
// #include <string.h>
// using namespace std;
// class student{
//     private:
//     int roll_no;
//     protected:
//     char section[10];
//     public:
//     void get_rno(){
//         cout<<"Enter the roll no: ";
//         cin>>roll_no;
//     }
//     void show_rno(){
//         cout<<"Roll no: "<<roll_no<<endl;
//     }
// };
// class result: public student{
//     private:
//     float fees;
//     public:
//     void get_data(){
//         get_rno();
//         cout<<"Enter fees: ";
//         cin>>fees;
//         cout<<"Enter section: ";
//         cin>> section;
//         void display(){
//             show_rno();
//             cout<<"fees: "<<fees<<endl;
//             cout<<"section: "<< section<<endl;
            
//         }
//     }
// };
// int main(){
//     result obj1;
//     obj1.get_data();
//     obj1.display();
// }



#include <iostream>
using namespace std;

class student {
private:
    int roll_no;

protected:
    char section[10];

public:
    void get_rno() {
        cout << "Enter the roll no: ";
        cin >> roll_no;
    }

    void show_rno() {
        cout << "Roll no: " << roll_no << endl;
    }
};

class result : public student {
private:
    float fees;

public:
    void get_data() {
        get_rno();
        cout << "Enter fees: ";
        cin >> fees;
        cout << "Enter section: ";
        cin >> section;
    }

    void display() {
        show_rno();
        cout << "Fees: " << fees << endl;
        cout << "Section: " << section << endl;
    }
};

int main() {
    result obj1;
    obj1.get_data();
    obj1.display();
    return 0;
}
