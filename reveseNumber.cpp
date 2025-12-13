#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter Number: ";
    cin>> n;
    int rev=0;
    while(n!=0){
        rev=rev*10;
        rev=rev+(n%10);     
        n=n/10;
    }
    cout<<"Reverse: "<<rev;
}