#include <iostream>

struct TreeNode 
{
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

void preOrder(TreeNode* root) 
{
    if (!root) return;
    std::cout << root->value << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(TreeNode* root) 
{
    if (!root) return;
    inOrder(root->left);
    std::cout << root->value << " ";
    inOrder(root->right);
}

void postOrder(TreeNode* root) 
{
    if (!root) return;
    postOrder(root->left);
    postOrder(root->right);
    std::cout << root->value << " ";
}

int main() 
{
    // Create a sample binary tree (similar to your previous example)

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    std::cout << "Pre-order Traversal: ";
    preOrder(root);

    std::cout << "\nIn-order Traversal: ";
    inOrder(root);

    std::cout << "\nPost-order Traversal: ";
    postOrder(root);

    return 0;
}
