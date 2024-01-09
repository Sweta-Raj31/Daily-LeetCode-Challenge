/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void Inorder(TreeNode* root, string& s) {
        if (root == NULL)
            return;
        // leaf Node
        if (root->left == NULL && root->right == NULL) {
            s += to_string(root->val) + "_"; // we have used underscore of the case agar ek ka leaf 1
                      // 12 hua dusre ka 11 2 string mail dono same ho jai ga
                      // for that condition we have used _ after each value or
                      // we can solve vector also.
        }
        Inorder(root->left, s);
        Inorder(root->right, s);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string s1;
        string s2;
        Inorder(root1, s1);
        Inorder(root2, s2);
        return s1 == s2;
    }
};

// time complexity is:- O(n)+O(m);
// space complexity is:- length of leaf of of each tree max it goes  O(n)+O(m);
