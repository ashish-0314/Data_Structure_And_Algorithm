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

Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head ;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* removeK(Node* head , int k){
    if(head == NULL) return head;
    if(k==1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int cnt = 0 ;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next ;
            free(temp);
            break ;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removeEle(Node* head , int ele){
    if(head == NULL) return head;
    if(head->data == ele){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    Node* prev= NULL;
    while(temp != NULL){
        if(temp->data == ele){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev= temp ;
        temp = temp->next;
    }
    return head;
}

Node* InsertHead(Node* head , int val){
    Node* temp = new Node(val,head);
    return temp;
}

Node* InsertTail(Node* head , int val){
    if(head== NULL) return new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* InsertPosition(Node* head , int ele  , int k){
    if(head==NULL){
        if(k==1) return new Node(ele);
        else return head;
    }
    if(k==1) return new Node(ele,head);

    int cnt = 0 ;
    Node* temp = head;
    while(temp != NULL){
        cnt++;

        if(cnt == k-1){
            Node* x = new Node(ele);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* InsertBeforeValue(Node* head , int ele  , int val){
    if(head==NULL) return NULL;
    if(head->data==val) return new Node(ele,head);
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node* x = new Node(ele);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

void printLL(Node *head){
    while(head != NULL){
        cout<<head->data <<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {1,2,3,24,5};
    // Node y = Node(arr[0],nullptr);
    // cout<<y.data<<endl;
    // cout<<y.next<<endl;
    Node* head = convertArr2LL(arr);
    cout<< head->data; 

    // Node* temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    cout<<LengthofLL(head);

    //cout<<isPresentLL(head,4);
    if(isPresentLL(head,4)) cout<<"YES";

    //head = removeHead(head);
    //head = removeTail(head);
    //head = removeK(head , 2);
    //head = removeEle(head ,24 );
    //head = InsertHead(head,55);
    //head = InsertTail(head ,99);
    //head = InsertPosition(head,14,3);
    head = InsertBeforeValue(head,35,24);

    printLL(head);
}