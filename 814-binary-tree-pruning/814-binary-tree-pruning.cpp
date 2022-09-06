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
    TreeNode* pruneTree(TreeNode* root) {
        if(helper(root)==true){
            if(root->val == 0)return NULL;
            else return root;
        }
        return root;
    }
    bool helper(TreeNode* root){
        if(root==NULL) return true;
        bool tree1 = helper(root->left);
        bool tree2 = helper(root->right);
        if(tree1) root->left = NULL;
        if(tree2) root->right = NULL;
        if(tree1&&tree2 && root->val==0) return true;
        return false;
    }
};