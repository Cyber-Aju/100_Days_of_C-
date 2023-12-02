#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

class Node 
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

static int sumTree(Node* a)
{
    queue<Node*> q;
    q.push(a);
    int sum = 0;
    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();
        sum += curr->val;
        if(curr->left)
            q.push(curr->left);
        if(curr->right)
            q.push(curr->right);
    }
    return sum;
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int result = sumTree(root);
    cout << "Sum of the tree elements: " << result << endl;

    return 0;

}

