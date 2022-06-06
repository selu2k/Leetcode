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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> s;// main logic is to insert the nodes in a set to get the re occuring node
        auto h = headA;
        while(h!=NULL){
            s.insert(h);
            h = h->next;
        }
        while(headB != NULL){
            if(s.find(headB)!= s.end()){
                return headB;
            }
            headB = headB->next;
            
        }
        return NULL;
    }
};