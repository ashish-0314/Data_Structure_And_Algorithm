#include <iostream>
using namespace std;
int main (){
    int a;
    cout<< "Enter a: ";
    cin >> a;
    int b;
    cout<< "Enter b: ";
    cin >> b;
    int c;
    cout<< "Enter c: ";
    cin >> c;
    if (a>b && a>c){
        cout<<" a is greater";
    }
    else if(b>a && b>c){
        cout << "b is greater";
    }
    else if (c>a && c>b){
        cout << "c is graeter";
    }
}