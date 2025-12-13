#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n: ";
    cin>> n;
    int a=1;
    int b=1;
    int sum =1;
    cout<< a<<" ";
    cout<< b<<" ";
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        cout<< sum<<" ";
    }
    //cout<<"fibonacci series: "<< sum;

}