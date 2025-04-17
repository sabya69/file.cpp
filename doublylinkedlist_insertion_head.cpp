#include<iostream>
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
    void insertAthead(Node* &head,int d){
        Node* temp = new Node(d);
        temp ->next = head;
        head -> prev = temp;
        head = temp;
    }
    int main(){
        Node* node1 =new Node(10);
        Node* head = node1;
        print(head);
        insertAthead(head,11);
        print(head);
        insertAthead(head,12);
        print(head);    
        cout << "Length of the linked list is: " << getLength(head) << endl;
    }