// #include <iostream>
// using namespace std;
// int main(){
//     char ch;
//     cin>>ch;
//     int y = int(ch);
//     if ((65<=y<=90)||(97<=y<=122)){
//         cout<<"alphabet";
//     }
//     else{
//         cout<<"not alphabet";
//     }
// }


// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout<<"enter: ";
//     cin >> ch;
//     int y = int(ch);
//     if ((65 <= y && y <= 90) || (97 <= y && y <= 122)){
//         cout << "alphabet";
//     }
//     else{
//         cout << "not alphabet";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int k = 1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
// } 

#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter n: ";
    cin>>n;
    for (int i = 1; i<=n; i++){
        
        for (int j = i ; j>=1; j--){
            
            cout<<j;
            
            
        }
        cout<<endl;
    }

}