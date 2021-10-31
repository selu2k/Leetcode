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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(root != NULL){
            if(leaf(root->left)){
                sum+=root->left->val;
            }
            else{
                sum +=sumOfLeftLeaves(root->left);
            }
            if(!leaf(root->right)){
                sum +=sumOfLeftLeaves(root->right);
            }
        }
        return sum;
    }
    
    bool leaf(TreeNode* node){
        if(node == NULL){return false;}
        else if(node->left == NULL && node->right== NULL){return true;}
        return false;
    }
};