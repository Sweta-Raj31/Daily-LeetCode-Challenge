
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

int height(TreeNode* root)
{
    if(root==NULL)
    return 0;
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int ans=max(leftHeight,rightHeight)+1;
    return ans;
}
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        return 0;
        int op1=diameterOfBinaryTree(root->left);
        int op2=diameterOfBinaryTree(root->right);
        int op3=height(root->left)+height(root->right);
        int ans=max(max(op1,op2),op3);
        return ans;
        
    }
};
