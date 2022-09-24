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
    vector<vector<int>>res;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum){
        
        vector<int> v;
        helper(v,root,targetSum,0);
        return res;
    }
    void helper(vector<int>v,TreeNode* root,int target,int sum){
        if(root==NULL) return;
        if(root->left==NULL && root->right == NULL){
            sum += root->val;
            if(sum == target){
                v.push_back(root->val);
                res.push_back(v);
            }
            return;
        }
        sum += root->val;
        v.push_back(root->val);
        helper(v,root->left,target,sum);
        helper(v,root->right,target,sum);
    }
    
};