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
    ListNode* swapPairs(ListNode* head) {
        
        if(!head || !head->next){
            return head;
        }
        ListNode* curr = head->next;
        head->next = swapPairs(head->next->next);
        curr->next = head;
        return curr;
        // just swaping the values
        // while(curr && curr->next){
        //     int temp = curr->val;
        //     curr->val = curr->next->val;
        //     curr->next->val = temp;
        //     curr = curr->next->next;
        // }
        // return head;
        
    }
};