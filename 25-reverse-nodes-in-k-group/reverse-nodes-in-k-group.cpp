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
    ListNode* solve(ListNode* curr, ListNode* prev, ListNode* forward, int k, int cnt) {
        // Base case: if the current node or forward node is NULL, return prev
        if (curr == NULL || cnt == k) {
            return prev;
        }

        forward = curr->next;
        curr->next = prev;
        
        return solve(forward, curr, forward ? forward->next : NULL, k, cnt + 1);
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 1) {
            return head;
        }

        // Check if there are at least k nodes left in the list
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL && count < k) {
            temp = temp->next;
            count++;
        }
        
        if (count < k) {
            return head;
        }

        ListNode* newHead = solve(head, NULL, NULL, k, 0);

        head->next = reverseKGroup(temp, k);

        return newHead;
    }
};
