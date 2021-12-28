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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* current = head;
        ListNode* current2 = head;
        ListNode* c = head;
        int count = 0;
        while(c!=NULL){
            count++;
            c = c->next;
        }
        int x = 1;
        while(x<k){
            x++;
            current = current->next;
        }
        x=1;
        while(x<(count-k+1)){
            x++;
            current2 = current2->next;
        }
        int temp = current2->val;
        current2->val = current->val;
        current->val = temp;
        return head;
    }
};