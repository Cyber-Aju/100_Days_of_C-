#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<map>

using namespace std;

class TreeNode 
{
    public:
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : value(x), left(NULL), right(NULL) {}
};

bool isMirror(TreeNode* root) 
{
    if (!root) return true;
    return isMirrorHelper(root->left, root->right);
}

bool isMirrorHelper(TreeNode* left, TreeNode* right) 
{
    if (!left && !right) return true;
    if (!left || !right || left->value != right->value) return false;
    return isMirrorHelper(left->left, right->right) && isMirrorHelper(left->right, right->left);
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

    cout << isMirror(root);

    return 0;
}
