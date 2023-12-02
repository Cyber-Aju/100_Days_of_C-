#include <iostream>
#include <queue>

using namespace std;

class Node
{
    public:
    int val;
    Node* right;
    Node* left;

    Node(int val)
    {
        this->val= val;
        this->right=NULL;
        this->left=NULL;
    }
};

bool findInBinaryTree(Node* root, string key)
{
    while(root!=NULL)
    {
        int keyVal=stoi(key);
        if(root->val==keyVal)
        {
            return true;
        }
        else if((root->val)>keyVal)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    return false;
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    bool s=findInBinaryTree(root,"5");
    cout<<s<<endl;
}