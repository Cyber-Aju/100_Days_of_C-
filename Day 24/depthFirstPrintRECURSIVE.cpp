#include <iostream>
#include <stack>

struct TreeNode 
{
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void depthFirstPrint(TreeNode* root) 
{
    if (!root) 
    {
        return;
    }
    std::cout << root->value << " ";
    depthFirstPrint(root->left);
    depthFirstPrint(root->right);
    
}

int main() 
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    std::cout << "Depth-First Traversal: ";
    depthFirstPrint(root);

    return 0;
}
