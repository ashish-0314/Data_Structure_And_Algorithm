#include <iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter a: ";
    cin >> a;
    int b;
    cout<< "Enter b: ";
    cin >> b;
    int c;
    cout<< "Enter c: ";
    cin >> c;
    if (a+b>c && b+c>a && a+c>b){
        cout<< "Valid Triangle";
    }
    else{
        cout<< "Invalid Triangle";
    }
}