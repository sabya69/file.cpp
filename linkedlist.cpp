#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // Parameterized constructor
    Node(int value) {
        data = value;
        next = nullptr; // Initialize next to nullptr
    }
};
int main(){
Node* node1=new Node(10);
cout << node1 -> data << endl;
cout << node1 -> next << endl;

}