// #include <iostream>
// using namespace std;
// #define MAX  3;
// int stack[MAX];
// int top=-1;

// void push(int value){
//     if(top==MAX-1){
//         cout<<"overflow";
//         return;
//     }
//     else{
//         stack[++top]=value;
//         cout<<"pushed to stack: "<<value<<endl;
//     }
// }

// void pop(){
//     if(top==-1){
//         cout<<"underflow";
//     }else{
//         int removed = stack[top--];
//         cout<<"Removed value: "<<removed<<endl;
//     }  
// }

// void peek(){
//     if (top==-1){
//         cout<<"stack is empty";
//     }
//     else{
//         cout<<"Top element: "<<stack[top];
//     }
// }

// int main(){
//     push(10);
//     push(20);
//     return 0;
// }






#include <iostream>
using namespace std;

#define MAX 3 

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1) {
        cout << "Overflow" << endl;
        return;
    } else {
        stack[++top] = value;
        cout << "Pushed to stack: " << value << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
    } else {
        int removed = stack[top--];
        cout << "Removed value: " << removed << endl;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Top element: " << stack[top] << endl;
    }
}

void display(){
    if(top==-1){
        cout<<"Stack is empty";
    }
    else{
        for(int i= top; i>=0; i--){
            cout<<stack[i]<<" ";
        }
    }
}

int main() {
    push(10);
    push(20);
    // peek();  // You can also peek at the top element after pushing values
    push(30);
    push(40); // This will cause overflow
    pop();
    pop();
    pop();
    pop();
    display();
    // peek();  // See the top after popping

    int choice , value;
    while (true){
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            cin>>value;
            push(value);
            break;
            case 2: 
            pop();
            break;
            case 3: 
            display();
            break;
            case 4:
            return 0;
            default:
            cout<<"Invalid choice ";
        }
    }
    //return 0;
}





#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *top=nullptr;
void push(int value){
    node *newnode = new node();
    newnode->data= value;
    top=newnode;
    cout<<"pushed value: "<<value<<endl;

}

void pop() {
    if (top == nullptr) {
        // Stack is empty
        cout << "Stack underflow. No element to pop." << endl;
        return;
    }
    cout<<"Popped: "<<head->data<<endl;
    // Save the current top node
    Node* temp = top;

    // Move the top pointer to the next node
    top = top->next;

    // Delete the old top node
    delete temp;
}


void display(){
    if(top==nullptr){
        cout<<"Stack is empty"<<endl;

    }
    else{
        node *temp=top;
        while(temp!=nullptr){
            cout<<temp->data;
            temp=temp->next;
        }
    }
}

int main(){
    int choice , value;
    while (true){
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            cin>>value;
            push(value);
            break;
            case 2: 
            pop();
            break;
            case 3: 
            display();
            break;
            case 4:
            return 0;
            default:
            cout<<"Invalid choice ";
        }
    }
}