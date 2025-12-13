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

int binarySearch(int arr[],int n,int key){
    int start = 0 ;
    int end = n-1 ;
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

int main (){
    int n;
    cout<< "Enter size: " ;
    cin>> n;
    int arr[n];
    InputArray(arr,n);
    int key;
    cout<<"Enter key: ";
    cin>>key;
    int index = binarySearch(arr,n,key);
    cout << "Index of "<< key <<" is: "<< index;

}

