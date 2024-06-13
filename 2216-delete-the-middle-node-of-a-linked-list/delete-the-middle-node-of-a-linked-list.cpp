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
    ListNode* deleteMiddle(ListNode* head) {
 if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        // Initialize slow and fast pointers and a pointer to the previous node of slow
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Move fast pointer twice as fast as slow pointer
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Unlink the middle node
        if (prev != nullptr) {
            prev->next = slow->next;
        }

        // Free the memory of the middle node
        delete slow;

        // Return the head of the modified list
        return head;
    }
};