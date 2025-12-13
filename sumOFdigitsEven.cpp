#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter number : ";
    cin>> n;
    int sum=0;
    while (n!=0){
        int r = n%10;
        // n=n/10;
        if (r%2==0){
            sum+=r;
        }
        n/=10;
        
    }
    cout<< "Sum of even Digits: "<< sum;

}