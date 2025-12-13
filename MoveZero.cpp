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

void MoveZero(int arr[], int n){
    int nonzero= 0;
    for (int j = 0; j<n; j++){
        if (arr[j] != 0){
            swap(arr[j],arr[nonzero]);
            nonzero++;
        }
    }
}

int main(){
    int n;
    cout<<" Enter the size of array: ";
    cin>> n;
    int arr[n];
    InputArray(arr,n);
    PrintArray(arr,n);
    MoveZero(arr,n);
    PrintArray(arr,n);
}