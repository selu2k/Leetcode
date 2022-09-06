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
    bool isUnivalTree(TreeNode* root) {
        return helper(root);
    }
    bool helper(TreeNode* root){
        if(root==NULL) return true;
        bool tree1 = true;
        bool tree2 = true;
        bool t1=true;
        bool t2=true;
        if(root->left){
            tree1 = helper(root->left);
            if(root->val != root->left->val || !tree1){
                return false;
            }
        } 
        if(root->right){
            tree2 = helper(root->right);
            if(root->val != root->right->val || !tree2){
                return false;
            }
        } 
        // if(tree1&& tree2 && root->val== root->left->val && root->val == root->left->val){
        //     return true;
        // }
        return true;
    }
};