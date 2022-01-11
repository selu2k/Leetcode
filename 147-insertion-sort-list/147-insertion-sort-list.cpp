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
        
        // for(auto cur = head ; cur ; cur = cur->next){
        //     for( auto i = head ; i!=cur ; i = i->next){
        //         if(i->val > cur->val){
        //             swap(i->val,cur->val);
        //         }
        //     }
        // }
        // return head;
        auto dummy = new ListNode(INT_MIN,head);
        for(auto curPrev = head,cur = head->next ; cur;){
            auto jPrev = dummy , j = dummy->next,curNext = cur->next;
            if(cur->val>curPrev->val){
                curPrev = cur;
            }else{
                while(j->val < cur->val){
                    jPrev = j , j = j->next;
                }
                jPrev->next = cur;
                cur->next = j;
                curPrev->next = curNext;
            }
            cur = curNext;
        }
        return dummy->next;
    }
};