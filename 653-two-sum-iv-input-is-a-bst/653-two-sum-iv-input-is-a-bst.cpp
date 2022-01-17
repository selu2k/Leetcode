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
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        inorderHelper(root,nums);
        bool res = finder(k,nums);
        return res;
    }
    
    void inorderHelper(TreeNode* root,vector<int>& nums){
        if(!root) return;
        inorderHelper(root->left,nums);
        nums.push_back(root->val);
        inorderHelper(root->right,nums);
    }
    bool finder(int n,vector<int> nums){
        for(int i=0,j=nums.size()-1;i<j;){
            int sum = nums[i]+nums[j];
            if(sum==n){
                return true;
            }
            else if(sum < n){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};