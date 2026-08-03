/**
 LeetCode 328 - Odd Even Linked List
 For your kind info. It's my own approach.

  Approach:
  - Remove every even-positioned node from the odd chain.
  - Even nodes remain connected through their original next pointers.
  - Attach the even list to the end of the odd list.
 
  Time Complexity: O(n)
  Space Complexity: O(1)
 */

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* temp = head;
        ListNode* evenHead = head->next;
        ListNode* store;
        int count = 0;

        while (temp && temp->next && temp->next->next) {
            store = temp->next;
            temp->next = store->next;
            temp = store;
            count++;
        }

        if (count % 2 == 0) {
            temp->next = evenHead;
        } else {
            temp->next->next = evenHead;
            temp->next = nullptr;
        }

        return head;
    }
};
