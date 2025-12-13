#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n : ";
    cin >> n ;
    int i = 2;
    int a=0;
    while (i<n){
        if (n%i==0){
            a=1;
            //i=i+1;  
            break;
        }
        i=i+1;            
    }
    if (a==0) cout<<"prime";
    else cout <<"Not prime";
}