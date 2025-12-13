#include <iostream>
using  namespace std;

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

int Pivotindex(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid;
    while (start < end){
        mid = start + (end - start)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return end ;
}

int binarySearch(int arr[],int start , int end, int key){
    start = start ;
    end = end ;
    int mid = start + (end - start )/2 ;
    while (start<=end){

        if (arr[mid]==key){
            return mid ;
        }

        if (key > arr[mid]){
            start = mid + 1 ;
        }

        if (key < arr[mid]){
            end = mid - 1 ;

        }

        mid = start + (end - start )/2 ;
    }
    return -1 ;   
}

int findPosition(int arr[],int n, int k){

    int pivot= Pivotindex(arr,n);

    if (k>= arr[pivot] && k<= arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }

    else{
        return binarySearch(arr,0,pivot-1,k);
    }

}

int main(){
    int size ;
    cout<< "Enter Size: ";
    cin>> size;
    int arr[size];
    InputArray(arr,size);
    int k;
    cout<< "Enter Key: ";
    cin>>k;
    cout << k << " is present at Index: "<< findPosition(arr,size,k);

}