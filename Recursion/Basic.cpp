#include <bits/stdc++.h>
using namespace std;

void fun(int i,int n){
    if(i>n) return ;
    cout << i << endl;
    fun(i+1,n);
}

//Backtracking method
void funbt(int i,int n){
    if(i<1) return ;
    fun(i-1,n);
    cout << i << endl;
}


int main(){
    // fun(1,4);
    funbt(4,4);
}