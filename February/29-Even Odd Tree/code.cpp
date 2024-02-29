
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
    bool isEvenOddTree(TreeNode* root) 
    {
        if(root->val%2 == 0)
            return false;
        
        int level = 0;
        
        queue<TreeNode*>q;
        q.push(root);
        
        
        while(!q.empty())
        {
            int len = q.size();
            TreeNode* prev = NULL;
            while(len--)
            {
                TreeNode* currentNode = q.front();
                q.pop();
                
                
                // even level
                // odd integers & strictly increasing
                if(level%2 == 0)
                {
                    if(currentNode->val%2 == 0 || (prev && prev->val >= currentNode->val))
                    {
                        return false;
                    }
                }
                // odd level 
                // even integers strictly decreasing
                else
                {
                    if(currentNode->val%2 == 1 || ( prev && prev->val <= currentNode->val))
                    {
                        return false;
                    }
                }
                
                if(currentNode->left)
                    q.push(currentNode->left);
                if(currentNode->right)
                    q.push(currentNode->right);
                
                prev = currentNode;
            }
            level++;
        }
        return true;
    }
};
