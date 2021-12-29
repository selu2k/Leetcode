/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v,stack;
        while(head!=NULL){
            v.push_back(head->val);
            head = head->next;
        }
        for(int i = v.size()-1;i>=0 ; --i){
            int curr = v[i];
            while(!stack.empty() && stack.back()<=curr) stack.pop_back();
            v[i] = stack.empty()? 0:stack.back();
            stack.push_back(curr);
        }
        return v;
        
    }
};