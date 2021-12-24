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
    ListNode* middleNode(ListNode* head) {
        int count = 0; // Initialize count 
        ListNode* current = head; // Initialize current 
        while (current != NULL) 
        { 
            count++; 
            current = current->next; 
        } 
        if(count==1){return head;}
        if(count%2==1){
            int x = count/2;
            ListNode* current = head;
            for(int i=0;i<x;i++){
                current=current->next;
            }
            return current;
        }else{
           int x = count/2;
            ListNode* current = head;
            for(int i=0;i<x;i++){
                current=current->next;
            }
            return current;
        }
        
    }
};