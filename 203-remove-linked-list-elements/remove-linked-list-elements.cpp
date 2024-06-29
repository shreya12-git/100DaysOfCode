class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Handle the case where the head needs to be removed
        while (head != NULL && head->val == val) {
            head = head->next;
        }
        
        ListNode* prev = head;
        ListNode* curr = (head != NULL) ? head->next : NULL;
        
        while (curr != NULL) {
            if (curr->val == val) {
                prev->next = curr->next;
            } else {
                prev = curr;
            }
            curr = curr->next;
        }
        
        return head;
    }
};
