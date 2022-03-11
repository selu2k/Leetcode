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
    ListNode* rotateRight(ListNode* head, int k) {
        int count = 1 ;
        if(!head || !head->next) return head;
        ListNode* h = head;
        while(h->next){
            h = h->next;
            count++;
        }
        h->next = head;
        
        //k = (count - k ) % count;
        // for(int i = 0 ; i<k ; i++){
        // ListNode* curr = head;
        // ListNode* prev = head;
        // while(curr->next){
        //     prev = curr;
        //     curr = curr->next;
        // }
        // prev->next = NULL;
        // curr->next = head;
        // head = curr;
        // }
        // return head;
        
        
        
        if(k = k%count){
            for(int i = 0 ; i< count-k ; i++){
                h = h->next;
            }
        }
        ListNode* newh = h->next;;
        h->next = NULL;
        return newh;
    }
};