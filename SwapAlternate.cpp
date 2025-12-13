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

// void SwapAlt(int arr[],int n){
//     int start = 0;
//     int end =1;
//     while(start<n-1){
//         swap(arr[start],arr[end]);
//         start=start+2;
//         end=end+2;
//     }
// }

void SwapAlt(int arr[],int size){
    for (int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int size;
    cout<<"size: ";
    cin>> size;
    int arr[size];
    InputArray(arr,size);
    PrintArray(arr,size);
    SwapAlt(arr,size);
    PrintArray(arr,size);

}