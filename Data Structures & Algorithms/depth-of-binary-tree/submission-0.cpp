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
    void solve(TreeNode* root,int cnt,int &maxi){
        if(!root){
            maxi=max(maxi,cnt);
            return;
        }

            solve(root->left,cnt+1,maxi);
        

            solve(root->right,cnt+1,maxi);
        
    }
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        int cnt=0,max_depth=0;
        solve(root,cnt,max_depth);
        return max_depth;
    }
};
