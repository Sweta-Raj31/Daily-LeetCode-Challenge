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
    
    int findSum(TreeNode* root, int low, int high)
    {
        if(root == NULL) return 0;
        
        if(root->val < low)
            return findSum(root->right,low,high);
        
        else if(root->val > high)
            return findSum(root->left,low,high);
        
        // low <= root->val && root->val <=high
        else
            return root->val + findSum(root->left,low,high) + findSum(root->right,low,high);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        return findSum(root,low,high);
    }
};

/*
Time Complexity = O(N)
Space Complexity = O(h), h->height of bst
*/
