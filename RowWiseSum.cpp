#include <iostream>
#include <climits>
using namespace std;


void InputArray(int arr[][100],int row,int column){
    cout<<"Inputs: ";
    for(int i = 0; i<row ; i++){
        for (int j = 0; j<column ; j++){
            cin>>arr[i][j];
        }
    }
}

void PrintRowWiseSum(int arr[][100],int row, int column){
    cout<<"Printing row wise sum: ";
    for(int i = 0; i<row ; i++){
        int sum = 0;
        for (int j = 0; j<column ; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void PrintArray(int arr[][100],int row,int column){
    cout<<"Printig the array"<<endl;
    for(int i = 0; i<row ; i++){
        for (int j = 0; j<column ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int row;
    int col;
    cout<<"Enter Row: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;
    int arr[row][col];
    InputArray(arr,row,col);
    PrintRowWiseSum(arr,row,col);
}