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

int getSum(int arr[],int n){
    cout<<"Sum: ";
    int sum =0;
    for(int i =0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}

int main(){
    int size;
    cout << "Enter Size: ";
    cin>> size;
    int arr[size];
    InputArray(arr,size);
    PrintArray(arr,size);
    getSum(arr,size);

}
