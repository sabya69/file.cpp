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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAthead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    if (head != NULL) {
        head->prev = temp;
    }
    head = temp;
}

void insertAtposition(Node*& tail, Node*& head, int position, int d) {
    // Insert at start
    if (position == 1) {
        insertAthead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the position before the desired position
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // Inserting at the last position
    if (temp->next == NULL) {
        Node* newNode = new Node(d);
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
    } else { // Inserting in between
        Node* newNode = new Node(d);
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    // Insert at head
    insertAthead(head, 10);
    tail = head;
    print(head);

    // Insert at position 2
    insertAtposition(tail, head, 2, 20);
    print(head);

    // Insert at position 3
    insertAtposition(tail, head, 3, 30);
    print(head);

    // Insert at position 2
    insertAtposition(tail, head, 2, 15);
    print(head);
    // Insert at postion 5
    insertAtposition(tail,head,5,35);
    print(head);
    // Insert at position 1
    insertAtposition(tail,head,1,5);
    print(head);

    return 0;
}