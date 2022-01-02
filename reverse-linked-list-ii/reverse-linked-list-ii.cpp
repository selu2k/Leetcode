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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr = head;
        if(left == right) return head;
        int num = right-left+1;
        if(left!=1){
            left = left-2;
            while(left>0){
                curr = curr->next;
                left--;
            }
            ListNode* first = curr ;
            first->next = reversee(curr->next,num);
        }
        else{
            head = reversee(head,num);
        }
        
        return head;
    }
    ListNode* reversee(ListNode* h , int k){
        ListNode* prev= NULL;
        ListNode* cur = h;
        ListNode* next = h;
        ListNode* temp = h;
        while(k>1){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
            k--;
        }
        temp->next = cur->next;
        cur->next = prev;
        return cur;
    }
};