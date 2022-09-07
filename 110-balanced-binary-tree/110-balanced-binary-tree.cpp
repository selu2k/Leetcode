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
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        bool l = isBalanced(root->left);
        bool r = isBalanced(root->right);
        return l && r && abs(height(root->left) - height(root->right)) < 2 ;
    }
    
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int l = height(root->left);
        int r = height(root->right);
        if(l>r){
            return l+1;
        }
        else return r+1;
    }
};