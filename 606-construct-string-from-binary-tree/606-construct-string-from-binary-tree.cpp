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
    string tree2str(TreeNode* root) {
        return helper(root);
    }
    string helper(TreeNode* root){
        if(root==NULL) return "";
        string s = "";
        s = s+ to_string(root->val);
        auto r1 = root->left;
        auto r2 = root->right;
        if(!r1 && !r2){
            return s;
        }
        else if(!r1 && r2){
            s = s + "()";
            s = s +"("+ helper(r2)+")";
        }
        else if(r1 && !r2){
            s = s+ "("+helper(r1) + ")";
        }
        else if(r1&&r2){
            s = s+ "("+helper(r1) + ")" +"("+ helper(r2)+")";
        }
        return s;
    }
};