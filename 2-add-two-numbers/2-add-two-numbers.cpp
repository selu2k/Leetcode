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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = l1;
    int carry = 0;
    while(l1){
        l1->val = l1->val + carry + ((l2) ? l2->val : 0); // if l2 is empty add 0
        
        carry = l1->val /10;
        
        l1->val = l1->val %10 ;  // updating l1's value
        
        if(l1->next == NULL && l2 != NULL){
            l1->next = l2->next ;
            l2 = NULL;
        }
        if(l1->next == NULL && carry == 1){ // add new node

            l1->next = new ListNode(carry);
            l1 = l1->next ;
        }
        l1 = l1->next ;
        if(l2 != NULL){

            l2 = l2->next;
        }
    }
    return head;
    }
};