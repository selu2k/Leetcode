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
        struct ListNode *ptr;
        ptr = head;
        int temp=-1;
        if(head == NULL){return head;}
        while(ptr->next!=NULL){
            // if(temp == ptr->val){
            // ptr->next = 
            // }
            if(ptr->val == (ptr->next)->val){
                ptr->next = (ptr->next)->next;
            }
            else{
                ptr = ptr->next;
            }
           
        }
        return head;
    }
};