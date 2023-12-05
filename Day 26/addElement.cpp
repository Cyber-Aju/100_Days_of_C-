
#include <iostream>

using namespace std;

class Node
{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int val)
    {
        value=val;
        left=NULL;
        right=NULL;
    }
};

void addElement(Node*& root, int value) {
    if (!root) {
        root = new Node(value);
        return;
    }

    if (value < root->value) {
        addElement(root->left, value);
    } else {
        addElement(root->right, value);
    }
}

int main() {
    Node* root = nullptr;
    addElement(root, 5);
    addElement(root, 3);
    addElement(root, 7);
    addElement(root, 2);
    addElement(root, 4);
    addElement(root, 6);
    addElement(root, 8);
    /*
      5
     / \
    3   7
   / \ / \
  2  4 6  8
    */
    return 0;
}
