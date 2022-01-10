/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //bool flag =false;
        // if(head->next==NULL || head->next->next==NULL){
        //     return false
        // }
        ListNode* walker = head;
        ListNode* runner = head;
        while(runner!=NULL && runner->next!=NULL) {
            walker = walker->next;
            runner = runner->next->next;
            if(walker==runner) return true;
        }
        return false;
    }
};