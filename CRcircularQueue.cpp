#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// Function to add an element to the queue
void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1) {
        front = 0; // Initialize front
    }
    rear = (rear + 1) % SIZE; // Update rear position
    queue[rear] = value; // Enqueue the value
    cout << "Enqueued value: " << value << endl; // Fixed typo 'Cout' to 'cout'
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Dequeued value: " << queue[front] << endl;
    if (front == rear) { // Queue is now empty
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE; // Update front position
    }
}

// Function to display the current state of the queue
void display() { // Fixed typo 'dispaly' to 'display'
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Current Queue: ";
    int i = front;
    while (true) {
        cout << queue[i] << " ";
        if (i == rear) {
            break; // Exit the loop if we've reached the rear
        }
        i = (i + 1) % SIZE; // Move to the next position in the circular queue
    }
    cout << endl;
}

int main() {
    int choice, value;
    while (true) {
        cout << "Enter choice (1: Enqueue, 2: Dequeue, 3: Display, 4: Exit): ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0; // Exit the program
            default:
                cout << "Invalid choice" << endl;
        }
    }
}
