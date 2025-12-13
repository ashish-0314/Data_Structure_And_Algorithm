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

char toLower(char name){
    if(name>='a' && name<= 'z'){
        return name;
    }
    else{
        char temp = name -'A' + 'a';
        return temp;
    }
}

bool CheckPallindrome(char name[],int n){
    n = getLength(name);
    int start = 0;
    int end = n-1;
    while(start <= end ){
        if(toLower(name[start])!=toLower(name[end])){
            return 0 ;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

int main(){
    char name[100];
    cout<<"Enter Kuch v: ";
    cin>> name;
    int n = getLength(name);
   
    cout<< "Pallindrome or Not: " << CheckPallindrome(name , n);
}