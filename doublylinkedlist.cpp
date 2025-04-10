#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " "; // Added space for better readability
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

int main() {
    // Create the first node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    // Create and link the second node
    Node* node2 = new Node(20);
    tail->next = node2;
    node2->prev = tail;
    tail = node2;

    // Create and link the third node
    Node* node3 = new Node(30);
    tail->next = node3;
    node3->prev = tail;
    tail = node3;

    // Print the linked list
    print(head);

    // Print the length of the linked list
    cout << "Length of the linked list is: " << getLength(head) << endl;

    return 0;
}