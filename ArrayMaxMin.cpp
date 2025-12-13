#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[],int n){
    int max= INT_MIN ;
    for ( int i =0; i<n ; i++ ){
        if (num[i] > max ){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[],int n){
    int min= INT_MAX ;
    for ( int i =0; i<n ; i++ ){
        if (num[i] < min ){
            min = num[i];
        }
    }
    return min;
}

void PrintArray(int arr[],int size){
    cout<<"Printing the Array: "<< endl;
    for(int i = 0; i< size; i++){
        cout << arr[i] << " " ;
    }
    cout<<endl;
    cout<< "Printing Done" << endl;
}

int main(){
    int size;
    cout<< "Enter size: " ;
    cin >> size ;
    int num[100];
    for (int i  =0; i< size ; i++){
        cin>> num[i];
    }
    PrintArray (num, size);
    cout <<"Maximum Value is: " << getMax(num,size) << endl;
    cout <<"Minimum Value is: " << getMin(num,size) << endl;
}

