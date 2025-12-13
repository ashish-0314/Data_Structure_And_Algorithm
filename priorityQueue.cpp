#include <iostream>
using namespace std;
#define MAX 5
struct PriorityQueue {
    int data;
    int priority;
};

PriorityQueue queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value , int priority){
    if(rear == MAX -1){
        cout<<"Queue Overflow "<<endl;
        return;
    }
    if (front == -1){
        front = 0;
    }
    int i ;
    for(i = rear ; i>= front && queue[i].priority < priority ; i--){
        queue[i+1] = queue[i];
    }

    queue[i+1].data = value;
    queue[i+1].priority = priority;
    rear++;
    cout<<"Enqueued "<<value<<" with priority "<<priority << endl;

}

void dequeue() {
    if (front == -1 || front > rear ){
        cout << "Queue Underflow "<<endl;
        return ;

    }
    cout << "Dequeued "<<queue[front].data <<" from queue "<<endl;
    front++;
    if(front > rear){
        front = rear = -1;
    }
}

void viewQueue(){
    if (front == -1){
        cout<<"Queue is empty"<<endl;

    }
    else{
        cout<<"Current queue: ";
        for(int i = front ; i<+ rear ;i++){
            cout<<"["<<queue[i].data << " (priority: "<<queue[i].priority<<")]";
        }
        cout<<endl;
    }
}

int main(){
    enqueue(10,2);
    enqueue(20,1);
    enqueue(30,3);
    enqueue(15,2);
    dequeue();
    enqueue(25,4);
    dequeue();
    viewQueue();
}