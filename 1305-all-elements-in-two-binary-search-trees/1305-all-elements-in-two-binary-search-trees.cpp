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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> t1;
        vector<int> t2;
        inorder(root1,t1);
        inorder(root2,t2);
        t1.insert(t1.end(),t2.begin(),t2.end());
        sort(t1.begin(),t1.end());
        return t1;
        
    }
    void inorder(TreeNode* root,vector<int>& v){
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
};