#include <iostream>
#include <array>
using namespace std ;

int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void ReverseString(char name[],int n){
    n = getLength(name);
    int start = 0;
    int end = n-1;
    while (start<end){
        swap(name[start],name[end]);
        start++;
        end--;
    }
}

int main(){
    char name[50];
    cout << "Enter your name: ";
    cin>> name;
    cout<<"Your name is "<<name<<endl;
    ReverseString(name,getLength(name));
    cout<<"Reverse of your name: "<<name<<endl;
    
}