#include <iostream>
using namespace std;

// Define the structure for a Node
struct Node {
    int data;
    Node* next;

    // Constructor to create a new node
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to reverse the linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        // Save the next node
        next = current->next;
        // Reverse the current node's pointer
        current->next = prev;
        // Move pointers one position ahead
        prev = current;
        current = next;
    }
    // At the end, prev will be the new head
    return prev;
}

// Function to insert a new node at the end of the list
void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert some elements into the linked list
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);

    cout << "Original Linked List: ";
    printList(head);

    // Reverse the linked list
    head = reverseLinkedList(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}
