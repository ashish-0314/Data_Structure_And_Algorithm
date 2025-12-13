#include <iostream>
using namespace std;
// struct employee{
//     char name[50];
//     int age;
//     float salary;
// };
// int main(){
//     employee e1;
//     cout<<"ENter full name: ";
//     cin.get(e1.name,50);
//     cout<<"Enter age: ";
//     cin>>e1.age;
//     cout<<"Enter salary: ";
//     cin>>e1.salary;
//     cout<<endl;
//     cout<<"Name: "<<e1.name<<endl;
//     cout<<"Age: "<<e1.age<<endl;
//     cout<<"Salary: : "<<e1.salary<<endl;
// }

// union car{
//     char name[20];
//     int year;
//     double price;
// };
void PrintArray(int arr[],int n){
    cout<<"Printing the Array: "<< endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " " ;
    }
    cout<<endl;
    cout<< "Printing Done" << endl;
}
int main(){
    // car c1;
    // cout<<"Name: ";
    // cin.get(c1.name,50);
    // cout<<"Name: "<<c1.name<<endl;
    // cout<<"year: ";
    // cin>>c1.year;
    // cout<<"year: "<<c1.year<<endl;
    // cout<<"price: ";
    // cin>>c1.price;
    // cout<<"price: "<<c1.price<<endl;

    int arr[5]={1,2,3,4,5};
    PrintArray(arr,5);
    arr[2]=67;
    PrintArray(arr,5);
    
}
