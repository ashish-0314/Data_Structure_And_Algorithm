#include <iostream>
using namespace std;

void InputArray(int arr[],int n){
    cout<<"Inputs: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

int PeakIndex(int arr[],int n){
    int start = 0;
    int end = n-1 ;
    int mid;
    while (start < end){
        mid = start + (end - start )/2;
        if(arr[mid]<arr[mid+1]){
            start= mid + 1 ;
        }
        else{
            end = mid ;
        }
        
    }
    return end ;
    // return arr[end];
    // cout<<endl;
    // cout<<"Element at PeakIndex is "<< arr[end];
}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    InputArray(arr,n);
    //PeakIndex(arr,n);
    cout<<"PeakIndex is at Index: "<< PeakIndex(arr,n)<<endl;
    int end =  PeakIndex(arr,n);
    cout<<"Element at PeakIndex is "<< arr[end];
}