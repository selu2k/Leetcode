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
    ListNode *getIntersectionNode(ListNode *h, ListNode *headB) {
        
    unordered_set<ListNode*> s;
    while (h != NULL) {
        s.insert(h);
        h = h->next;
    }
    while(headB!=NULL){
        if(s.find(headB) != s.end()){
            return headB;
        }
        headB = headB->next;
    }
 
    return NULL;
    }
};