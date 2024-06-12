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
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Step 1: Detect if there is a cycle using Floyd's Tortoise and Hare
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Step 2: Find the start of the cycle
                ListNode* ptr1 = head;
                while (ptr1 != slow) {
                    ptr1 = ptr1->next;
                    slow = slow->next;
                }
                return ptr1;
            }
        }

        // No cycle
        return NULL;
    }
};
