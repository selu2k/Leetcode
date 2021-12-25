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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        ListNode* second = head;
        ListNode* first = head;
        while(second->next!=NULL && second->next->next!=NULL){
            first = first->next;
            second = second->next->next;
        }
        ListNode* pre = NULL;
        ListNode* next = NULL;
        ListNode* temp = first->next;
        while(temp!=NULL){
            next = temp->next;
            temp->next = pre;
            pre = temp;
            temp = next;
        }
        first->next = pre;
        first = first->next;
        while(first!=NULL){
            if(head->val != first->val){
                return false;
            }
            head = head->next;
            first = first->next;
        }
        return true;
    }
};