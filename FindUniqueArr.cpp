#include <iostream>
using namespace std;

void InputArray(int arr[],int n){
    cout<<"Inputs: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void PrintArray(int arr[],int n){
    cout<<"Printing the Array: "<< endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " " ;
    }
    cout<<endl;
    cout<< "Printing Done" << endl;
}

int Unique(int arr[],int n){
    int ans =0;
    for (int i =0; i<n;i++){
        ans= ans^arr[i];
    }
    cout<< ans;
}

int main(){
    int size,key;
    cout << "Enter Size: ";
    cin>> size;
    int arr[size];
    InputArray(arr,size);
    PrintArray(arr,size);
    Unique(arr,size);
}