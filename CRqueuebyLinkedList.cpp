#include <iostream>
using namespace std;
struct node{
    int data ;
    node *next;
};
node *front = nullptr;
node *rear = nullptr;
void enqueue(int value){
    node *newnode = new node();
    newnode->data= value;
    newnode->next= nullptr;
    if(rear==nullptr){
        front=rear=newnode;
    }else{
    rear-> next = newnode;
    rear= newnode;
    }
    cout<<"Enqueued value: "<<value<<endl;
}
void dequeue(){
    if(front==nullptr){
        cout<<"Underflow"<<endl;
    }else{
        node *temp= front;
        front= front->next;
        cout<<"Dequeued value: "<<temp-> data;
        if(front == nullptr){
            rear= nullptr;
        }
        delete temp;
    }
}
void display() {
    if (front == nullptr) {
        cout << "Queue is empty" << endl;
    } else{
        node* temp = front;
        cout << "Current queue: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
int main(){
    int choice , value ;
    while(true){
        cout<<"Enter choice: ";
        cin>>choice;
        switch (choice){
        case 1:
            cout<<"Enter value: ";
            cin>>value;
            enqueue(value);
            break;
        case 2: 
            dequeue();
            break;
        case 3: 
            display();
            break;
        case 4: 
            return 0;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }}