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

// void BubbleSort(int arr[],int n){
//     //int Index=0;
//     for (int i = 0; i<n ; i++){
//         if(arr[i]<arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }


// void BubbleSort(int arr[],int n ){
//     for (int i = 0; i< n-1 ; i++){
//         int Index = i;
//         if (arr[i]<arr[i+1]){
//             Index = i+1 ;
//         }
//         swap(arr[Index],arr[i]);
//     }
// }

// 



void BubbleSort(int arr[], int n) {   
    for (int i = 0; i < n-1 ; i++) {      
        for (int j = 0; j < n -1-i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            PrintArray(arr,n);
        }
    }
}
int main(){
    int size;
    cout << "Enter size: ";
    cin>> size;
    int arr[size];
    InputArray(arr,size);
    PrintArray(arr,size);
    BubbleSort(arr,size);
    PrintArray(arr,size);
}