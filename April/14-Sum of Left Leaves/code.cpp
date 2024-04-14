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
void findLeftLeavesSum(TreeNode* &root, bool isLeft,int &ans)
{
    // got a leaf node
        if(!root->left && !root->right)
        {
            if(isLeft)
                ans += root->val;
            return;
        }
        
        if(root->left)
            findLeftLeavesSum(root->left,true,ans);
        if(root->right)
            findLeftLeavesSum(root->right,false,ans);

  
}
    int sumOfLeftLeaves(TreeNode* root) {
       int ans=0;
       findLeftLeavesSum(root,false,ans);
       return ans;
    }
};
