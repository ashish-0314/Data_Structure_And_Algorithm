#include <iostream>
#include <climits>
using namespace std;

// taking input row-wise
void InputArray(int arr[][100],int row,int column){
    cout<<"Inputs: ";
    for(int i = 0; i<row ; i++){
        for (int j = 0; j<column ; j++){
            cin>>arr[i][j];
        }
    }
}

// taking input column-wise
// void InputArray(int arr[][100],int row,int column){
//     cout<<"Inputs: ";
//     for(int i = 0; i<column ; i++){
//         for (int j = 0; j<row ; j++){
//             cin>>arr[j][i];
//         }
//     } 
// }

void PrintArray(int arr[][100],int row,int column){
    cout<<"Printig the array"<<endl;
    for(int i = 0; i<row ; i++){
        for (int j = 0; j<column ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// int SearchElement(int arr[][100],int row,int column,int element){
//     for(int i = 0; i<row ; i++){
//         for (int j = 0; j<column ; j++){
//             if(arr[i][j]==element){
//                 //cout<<"Element is present";
//                 return 1;
//             }
//             // else{
//             //     cout<<"Element is not present";
//             // }
//         }
//     }
//     //cout<<"Element is not present";
//     return 0;
// }

// void PrintRowWiseSum(int arr[][100],int row, int column){
//     cout<<"Printing row wise sum: ";
//     for(int i = 0; i<row ; i++){
//         int sum = 0;
//         for (int j = 0; j<column ; j++){
//             sum += arr[i][j];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }

// void PrintColumnWiseSum(int arr[][100],int row, int column){
//     cout<<"Printing column wise sum: ";
//     for(int i = 0; i<column ; i++){
//         int sum = 0;
//         for (int j = 0; j<row ; j++){
//             sum += arr[j][i];
//         }
//         cout<<sum<<" ";
//     }
//     cout<<endl;
// }

// int LargestRowSum(int arr[][100],int row,int column){

//     int maxi = INT_MIN;
//     int RowIndex= -1;
//     for(int i = 0; i<row ; i++){
//         int sum = 0;
//         for (int j = 0; j<column ; j++){
//             sum += arr[i][j];
//         }
//         if(sum>maxi){
//         maxi = sum;
//         RowIndex = i;
//         }
//     }
//     cout<<"The Maximumm row sum is : "<<maxi <<endl;
//     return RowIndex;

// }

// int LargestColumnSum(int arr[][100],int row,int column){

//     int maxi = INT_MIN;
//     int ColumnIndex= -1;
//     for(int i = 0; i<column ; i++){
//         int sum = 0;
//         int j = 0;
//         for (j = 0; j<row ; j++){
//             sum += arr[j][i];
//         }
//         if(sum>maxi){
//         maxi = sum;
//         ColumnIndex = i ;
//         }
//     }

//     cout<<"The Maximumm column sum is : "<<maxi <<endl;
//     return ColumnIndex;

// }

void diagonalElement(int arr[][100],int row, int column){
    cout<<"Diagonal Element : ";
    for(int i =0 ; i< row ; i++){
        for(int j =0; j<column ; j++){
            if(i==j){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main(){
    int row;
    cout<<"Enter the number of row: ";
    cin>>row;
    int column;
    cout<<"Enter the number of column: ";
    cin>>column;
    int arr[100][100];
    InputArray(arr,row, column);
    PrintArray(arr,row,column);
    // int element;
    // cout<<"Enter the element: ";
    // cin>>element;
    // cout<<"Element is present or not: "<<SearchElement(arr,row,column,element)<<endl;
    // PrintRowWiseSum(arr,row,column);
    // PrintColumnWiseSum(arr,row,column);
    // int rowIndex= LargestRowSum(arr,row,column);
    // int columnIndex= LargestColumnSum(arr,row,column);
    // cout<<"Max row sum is at index: "<<rowIndex<< endl;
    // cout<<"Max column sum is at index: "<<columnIndex<< endl;
    diagonalElement(arr,row,column);
    return 0;
} 