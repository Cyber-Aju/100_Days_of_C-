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
    std::stack<TreeNode*> nodeStack;
    nodeStack.push(root);

    while (!nodeStack.empty()) 
    {
        TreeNode* current = nodeStack.top();
        nodeStack.pop();

        std::cout << current->value << " ";

        // Push right child first
        if (current->right) 
        {
            nodeStack.push(current->right);
        }

        if (current->left) 
        {
            nodeStack.push(current->left);
        }
    }
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
