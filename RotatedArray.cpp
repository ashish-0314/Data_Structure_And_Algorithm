#include <iostream>
using namespace std;

void InputArray(int arr[], int n) {
    cout << "Inputs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void PrintArray(int arr[], int n) {
    cout << "Printing the Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done" << endl;
}

void RotateArray(int arr[], int n , int k){
    int temp[n];
    for( int i = 0 ; i<n ; i++){
        temp[(i+k)%n]= arr[i];
    }
   // arr=temp;
   for(int i =0; i<n;i++){
    arr[i]=temp[i];
   }
}

int main(){
    int n;
    cout<<" Enter the size of array: ";
    cin>> n;
    int arr[n];
    InputArray(arr,n);
    PrintArray(arr,n);
    int k ;
    cout<< "Enter K: ";
    cin>> k ;
    RotateArray(arr,n,k);
    PrintArray(arr,n);
} 