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

Vector<int> FindSum(vector<int>&a , int n , vector<int>&b ,int m){
    
}