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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }

        ListNode* fast=head;
        ListNode* slow=head;
        for(int i=0;i<n;i++){
            //k is head
            
            fast=fast->next;
        }
        if(fast==NULL){
                head=head->next;
                slow->next=nullptr;
                return head;
                free(slow);
            }
        
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        } ListNode* kth=slow->next;
        slow->next=kth->next;
        kth->next=nullptr;
       delete(kth);
        return head;
    }
};