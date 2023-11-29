#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = nullptr;

void insertNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

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

void printList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertNode(2); 
    insertNode(5);

    printList(); 

    return 0;
}
