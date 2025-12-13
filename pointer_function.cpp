#include <iostream>
using namespace std;

void show(int *p){
    cout<< *p << endl;
    cout<< p << endl;
}
void update(int *p){
    //p=p+1;
    *p=*p+1;
}


int main(){
    int value=5;
    int *p = &value;
    show(p);
    //cout<<"Before: "<<p<<endl; 
    cout<<"Before: "<<*p<<endl; 
    update(p);
    //cout<<"After: "<<p<<endl;
    cout<<"After: "<<*p<<endl;
}