#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    // Constructor
    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data << " "; // Added space for better readability
        temp = temp->next;
    }
    cout << endl;
}
int getLength(node* head){
    int len = 0;
    node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAttail(node* &tail,int d){
    node* temp =new node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}
int main(){
    node* node1 =new node(10);
    node* head =node1;
    node* tail = node1;
    print(head);
    insertAttail(tail,11);
    print(head);
    insertAttail(tail,12);
    print(head);
    insertAttail(tail,13);
    print(head);
    cout << "Length of the linked list is: " << getLength(head) << endl;
    return 0;
}