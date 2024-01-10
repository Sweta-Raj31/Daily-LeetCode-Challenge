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
    vector<int> adj[100005];
    void build(TreeNode* root){
        if(root==NULL) return;
        if(root->left){
            adj[root->left->val].push_back(root->val);
            adj[root->val].push_back(root->left->val);
        }
        if(root->right){
            adj[root->right->val].push_back(root->val);
            adj[root->val].push_back(root->right->val);
        }
        build(root->left);
        build(root->right);
    }
    int amountOfTime(TreeNode* root, int st) {
        build(root);
        vector<int> vis(100005,0);
        queue<int> q;
        q.push(st);
        vis[st] = 1;
        int cnt = 0;
        while(!q.empty()){
            cnt++;
            int sz = q.size();
            while(sz-->0){
                 int t = q.front();
                 q.pop();
                 for(auto x:adj[t]){
                    if(vis[x]==0){
                        vis[x] = 1;
                        q.push(x);
                    }
                 }
            }
        }
        return cnt-1;
    }
};
