#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number: ";
    cin>> n;
    int sum=0;
    // int r=n%10;
    while (n!=0){
        int r=n%10;
        n=n/10;
        sum=sum+r;
    }
    cout<< "Sum of Digits= " << sum;
}