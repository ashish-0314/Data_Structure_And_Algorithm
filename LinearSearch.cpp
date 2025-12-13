#include <iostream>
using namespace std;

void InputArray(int arr[],int n){
    cout<<"Inputs: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Printing the Array: "<< endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " " ;
    }
    cout<<endl;
    cout<< "Printing Done" << endl;
}

// void PrintArray(int arr[],int n){
//     cout<<"Printing the Array: "<< endl;
//     for(int i = 0; i< n; i++){
//         cout << arr[i] << " " ;
//     }
//     cout<<endl;
//     cout<< "Printing Done" << endl;
// }

bool LinearSerach(int arr[],int n ,int key){
    int a= 0;
    for (int i=0;i<n;i++){
        if(arr[i]==key){
            a=1;
        }
    }
    if(a==1) cout<<"Present";
    if(a==0) cout<<"Absent";
}

int main(){
    int size,key;
    cout << "Enter Size: ";
    cin>> size;
    int arr[size];
    InputArray(arr,size);
    //PrintArray(arr,size);
    cout<<"Enter Key: ";
    cin>> key;
    LinearSerach(arr,size,key);
    
}
