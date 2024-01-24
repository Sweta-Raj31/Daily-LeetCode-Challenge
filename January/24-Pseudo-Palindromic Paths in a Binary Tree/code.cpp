
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
bool isPalindrome(vector<int>&count)
{
    int oddFreq=0;
    for(auto CurrentIndex:count)
    {
        if(CurrentIndex%2==1)
        {
            oddFreq++;
        }
    }
    if(oddFreq>1)
    {
        return false;
    }
    return true;
}
void findPseudoPalindromicPaths(TreeNode *root, vector<int> &count,int &ans)
{
    if(root==NULL)return;
    count[root->val]++;
    findPseudoPalindromicPaths(root->left,count,ans);
    findPseudoPalindromicPaths(root->right,count,ans);
    if(root->left==NULL && root->right==NULL)
    {
        if(isPalindrome(count))
        {
            ans++;
        }
    }
    count[root->val]--;
    return;
}
    int pseudoPalindromicPaths (TreeNode* root) {
        int ans=0;
        vector<int>count(10,0);
        findPseudoPalindromicPaths(root,count,ans);
        return ans;
    }
};
// Time Complexity =O(N)  
//space Complexity =o(H)
