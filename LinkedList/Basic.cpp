#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
        int data ;
        Node *next;
    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
    public:
        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

Node* convertArr2LL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1 ; i < arr.size() ; i++ ){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp ;
    }
    return head;
}

int LengthofLL(Node* head){
    Node* temp = head;
    int cnt = 0 ;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool isPresentLL(Node* head , int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return true;
        temp = temp->next;
    }
    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    // Node y = Node(arr[0],nullptr);
    // cout<<y.data<<endl;
    // cout<<y.next<<endl;
    Node* head = convertArr2LL(arr);
    cout<< head->data; 

    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<LengthofLL(head);

    //cout<<isPresentLL(head,4);
    if(isPresentLL(head,4)) cout<<"YES";
}