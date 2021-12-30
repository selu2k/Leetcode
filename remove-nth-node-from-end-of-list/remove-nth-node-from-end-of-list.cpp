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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int count = 0;
        while(curr!=NULL){
            count++;
            curr = curr->next;
        }
        int x =1;
        ListNode* h = head;
        if(count-n == 0){return head->next;}
        while(x < (count-n)){
            h = h->next;
            x++;
        }
        h->next = h->next->next;
        return head;
    }
};