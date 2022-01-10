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
    ListNode* removeElements(ListNode* heade, int vale) {
        if(heade==NULL){return heade;}
        while(heade->val == vale){
            heade = heade->next;
            if(heade==NULL){return heade;}
        }
        ListNode* head = heade;
        ListNode* prev = heade;
        while(head!=NULL){
            if(head->val == vale){
                prev->next = head->next;
                head = head->next;
            }else{
                prev = head;
                head = head->next;
            }
        }
        return heade;
    }
};