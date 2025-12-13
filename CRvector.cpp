// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v1(10);
//     cout<<"Size is: "<<v1.size();
//     for(int i = 0; i<=9 ; i++){
//         v1[i]=i;
//     }
//     for(int i = 10 ; i<=19 ; i++){
//         v1.push_back(i);
//     }
//     cout<<endl;
//     cout<<"Size is: "<<v1.size()<<endl;
//     for(int i = 0; i<=19; i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;
//     v1.pop_back();
//     v1.pop_back();
//     cout<<"New size is: "<<v1.size();
//     cout<<endl;
//     vector<int>::iterator v = v1.begin();
//     while(v!= v1.end()){
//         cout<<"value of v: "<<*v<<endl;
//         v++;
//     }
//     return 0;

// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v1(10);
//     cout<<"Size is : "<<v1.size()<<endl;
//     for(int i = 0; i<= 9 ; i++){
//         v1[i]=i;
//     }
//     vector<int>::iterator i = v1.begin();
//     i=i+3;
//     v1.insert(i,100);
//     v1.erase(v1.begin()+1, v1.begin()+5);
//     for(int i = 0; i<v1.size(); i++){
//         cout<<v1[i]<<endl;
//     }
//     cout<<"New size: "<<v1.size()<<endl;
//     v1.clear();
//     cout<<"size: "<<v1.size(); 
// }



#include<bits/stdc++.h>
using namespace std;
void dispaly(list<int> &l){
    list<int>::iterator p;
    for(p=l.begin(); p!= l.end(); p++){
        cout<<*p<<endl;
    }
}
int main(){
    list<int> list1;
    list<int> list2(5);
    for(int i = 0; i< 3 ; i++){
        list1.push_back(i);
    }
    cout<<"diplaying first line: ";
    dispaly(list1);
    list<int>::iterator p;
    for(p=list2.begin(); p!=p2.end(); p++){
        *p=1;
    }
    cout<<"Displaying second list: ";
    dispaly(list2);
    cout<<"pushing element at front: ";
    list1.push_front(100);
    dispaly(list1);
    cout<<"popping element from front: ";
    list2.pop_front();
    dispaly(list2);
    cout<<"Sorting first list: ";
    list1.sort();
    dispaly(list1);
    cout<<""

}