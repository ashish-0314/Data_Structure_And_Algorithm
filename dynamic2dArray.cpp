#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int m; 
    cout<<"enter m: ";
    cin>>m;

    // 2d array creation
    int** arr= new int*[n];

    for(int i= 0; i< n; i++){
        arr[i]=new int[m];
    }

    for(int i =0; i< n; i++){
        for(int j = 0; j< m; j++){
            cin>>arr[i][j];
        }
    }


    for(int i =0; i< n; i++){
        for(int j = 0; j< m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
    for (int i = 0; i<n ; i++){
        delete [] arr[i];
    }

    delete []arr;
}