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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        ListNode* h = new ListNode(0);
        h->next = head;
        ListNode* prev = h;
        while(curr){
            ListNode* newcurr = curr->next;
            if(newcurr && curr->val == newcurr->val){
                while(newcurr && curr->val == newcurr->val){
                    newcurr = newcurr->next;
                }
                curr = newcurr;
                prev->next = curr;
            }else{
                prev = curr;
                curr = curr->next;
            }
        }
        return h->next;
    }
};