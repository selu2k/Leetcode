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
    ListNode* insertionSortList(ListNode* head) {
        ListNode *cur = head;
        for(cur ; cur ; cur = cur->next){
            for( auto i = head ; i!=cur ; i = i->next){
                if(i->val > cur->val){
                    swap(i->val,cur->val);
                }
            }
        }
        return head;
    }
};