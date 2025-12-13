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

void merge(int arr1[],int n , int arr2[], int m, int arr3[]){
    int i=0;
    int j=0;
    int k =0;
    while (i<n && j<m ){
        if (arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }

        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }

    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}


int main(){
    int n;
    cout<<" Enter the size of arr1: ";
    cin>> n;
    int arr1[n];
    InputArray(arr1,n);
    PrintArray(arr1,n);
    int m;
    cout<<" Enter the size of arr2: ";
    cin >> m ;
    int arr2[m];
    InputArray(arr2,m);
    PrintArray(arr2,m);
    int arr3[n+m];
    merge(arr1,n,arr2,m,arr3);
    PrintArray(arr3,n+m);

  
}