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

void RevArray(int arr[],int n){
    int start = 0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int size,key;
    cout << "Enter Size: ";
    cin>> size;
    int arr[size];
    InputArray(arr,size);
    PrintArray(arr,size);
    RevArray(arr,size);
    PrintArray(arr,size);
    
}