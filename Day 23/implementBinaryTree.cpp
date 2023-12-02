#include<iostream>
#include<queue>

using namespace std;

class Node
{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};

void printBinaryTree(Node* root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node* curr=q.front();
        cout << curr->val << " ";
        q.pop();
        if(curr->left)
        {
            q.push(curr->left);
        }
        if(curr->right)
        {
            q.push(curr->right);
        }
    }
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
     printBinaryTree(root);
}