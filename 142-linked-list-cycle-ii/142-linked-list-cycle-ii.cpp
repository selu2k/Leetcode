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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        set<ListNode*> s;
        auto cur = head;
        while(cur!=NULL){
            if(s.find(cur)!=s.end()){
                return cur;
            }else{
                s.insert(cur);
            }
            cur = cur->next;
        }
        return NULL;
    }
};