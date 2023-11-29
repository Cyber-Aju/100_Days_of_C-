#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = nullptr;

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(int value) {
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

// Function to delete a node from the beginning of the linked list
void deleteFromBeginning() {
    if (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    } else {
        cout << "List is empty. Cannot delete from beginning." << endl;
    }
}

// Function to delete a node from the end of the linked list
void deleteFromEnd() {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete from end." << endl;
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

// Function to print the linked list
void printList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertAtBeginning(2);
    insertAtEnd(3);
    insertAtBeginning(1);
    insertAtEnd(4);

    cout << "Original Linked List: ";
    printList();

    deleteFromBeginning();
    deleteFromEnd();

    cout << "Linked List after deletion: ";
    printList();

    return 0;
}
