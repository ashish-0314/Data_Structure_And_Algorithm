#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    int a=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int d=a+64;
            char ch=(char)d;
            cout<<ch<<" ";
            a++;
        }
    }
}