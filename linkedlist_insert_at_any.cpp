#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(node*& head, int d) {
    // New node creation
    node* temp = new node(d);
    temp->next = head; // Point new node to the current head
    head = temp;       // Update head to point to the new node
}

void insertAtTail(node*& tail, int d) {
    // New node creation
    node* temp = new node(d);
    tail->next = temp; // Link the current tail to the new node
    tail = temp;       // Update the tail to the new node
}

void insertAtAnyPosition(node*& head, int position, int d) {
    // If inserting at the head
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    node* temp = head;
    int count = 1;

    // Traverse to the position before the desired position
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    // Create a new node
    node* nodetoInsert = new node(d);

    // Insert the new node at the desired position
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;
}

void print(node*& head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* node1 = new node(10); // First node creation
    node* head = node1;
    node* tail = node1;

    insertAtTail(tail, 20); // Insert 20 at the end
    print(head);            // Print the list
    insertAtTail(tail, 30); // Insert 30 at the end
    print(head);            // Print the list
    insertAtAnyPosition(head, 2, 25); // Insert 25 at position 2
    print(head);  
    cout << "head" << head-> data << endl;
    cout << "last" << tail-> data << endl;          // Print the list

    return 0;
}