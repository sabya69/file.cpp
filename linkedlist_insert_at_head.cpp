#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int value) {
        this->data = value; // Correctly assign the parameter 'value' to 'data'
        this->next = nullptr;
    }
};

void insertAtHead(node*& head, int d) {
    // New node creation
    node* temp = new node(d);
    temp->next = head; // Point new node to the current head
    head = temp;       // Update head to point to the new node
}

void print(node*& head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " "; // Print the data of the current node
        temp = temp->next;         // Move to the next node
    }
    cout << endl;
}

int main() {
    node* node1 = new node(10); // Create the first node
    node* head = node1;         // Initialize head to point to the first node

    print(head);                // Print the initial list
    insertAtHead(head, 20);     // Insert 20 at the head
    print(head);                // Print the updated list
    insertAtHead(head, 30);     // Insert 30 at the head
    print(head);                // Print the updated list

    return 0;
}