#include <iostream>
using namespace std;

int main(){
    int arr[10]={0,1,42,63,84,25};

    // cout<<"Address of first memory block is: "<<arr<<endl;
    // cout<<"Address of first memory block is: "<<&arr<<endl;
    // cout<<"first memory block is: "<<arr[0]<<endl;
    // cout<<"Address of first memory block is: "<<&arr[0]<<endl;
    // cout<<"Address of 5th memory block is: "<<&arr[5]<<endl;

    // cout<<"The first element of array: "<<*arr<<endl;

    //it will throw error
    // cout<<*arr[0]<<endl;
    // cout<<*arr[2]<<endl;
    // cout<<*arr[3]<<endl;

    // cout<<"The 2nd element of array: "<<*(arr+1)<<endl;
    // cout<<"The 3rd element of array: "<<*(arr+2)<<endl;
    // cout<<"The 4th element of array: "<<*(arr+3)<<endl;
    // cout<<"The 5th element of array: "<<*(arr+4)<<endl;
    // cout<<"The 10th element of array: "<<*(arr+9)<<endl;

    // int i = 3;
    // cout<<i[arr]<<endl;

    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
}