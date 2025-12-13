#include <iostream>
using namespace std;
class Stack{
    //properties
    public:
        int *arr;
        int top;
        int size;

    //behaviour
    Stack(int size){
        this -> size = size;
        arr= new int[size];
        top = -1;
    } 

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top]= element;
            cout << "Pushed to stack: " << element << endl;
        }
        else{  // top == size -1  
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop() {
        if(top >= 0 ){
            int popped= arr[top];
            top--;
            cout<<"Popped elemnt is: "<<popped<<endl;
        }
        else{  // top == -1
            cout<<"Stack Underflow"<<endl;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } 
        else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty";
        }
        else{
            for(int i= top; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Stack st(5);
    
    st.push(22);
    st.push(43);
    st.push(47);
    st.push(40);
    st.display();
    st.peek();
    st.display();
    st.pop();
    st.display();
    
}