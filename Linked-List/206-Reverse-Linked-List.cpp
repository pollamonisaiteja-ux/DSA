/**
 LeetCode 206 - Reverse Linked List
 
  Approach:
  - Reverse the linked list iteratively using three pointers.
 
  Time Complexity: O(n)
  Space Complexity: O(1)
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};