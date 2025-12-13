#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    // int element;
    // cout<<"Enter the elememt: ";
    // cin>>element;
    // int flag=0;
    // for (int i = 0; i<n; i++){
    //     if(arr[i]==element){
    //         cout<<"Element found at location "<<i<<endl;
    //         flag++;
    //         break;
    //     }
    // }
    // if(flag==0){
    //     cout<<"Element is not present";
    // }
    
    // for(int i =0;i<n;i++){
    //     if(arr[i]!=element){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    int search;
    cout<<"Enter the search: ";
    cin>>search;
    int beg=0;
    int end=n-1;
    int flag=0;
    while(beg>=end){
        int mid= (beg+end)/2;
        if(arr[mid]==search){
            cout<<"Search is found at index: "<<mid; 
            flag++;
        }
        if(search<arr[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(flag==0){
        cout<<"search is not found";
    }


}