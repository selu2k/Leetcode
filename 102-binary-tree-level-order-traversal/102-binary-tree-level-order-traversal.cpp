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
    vector<vector<int>> res;
    void helper(TreeNode* root, int dep){
        if(!root){
            return;
        }
        if(res.size()==dep) res.push_back(vector<int>());
        res[dep].push_back(root->val);
        helper(root->left,dep+1);
        helper(root->right,++dep);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        helper(root,0);
        return res;
        
    }
};