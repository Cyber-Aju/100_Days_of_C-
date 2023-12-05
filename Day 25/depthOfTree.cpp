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

int depthOfTree(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+(max(depthOfTree(root->left),depthOfTree(root->right)));
}

int main()
{
    Node* root =new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    cout << depthOfTree(root) << endl;
}