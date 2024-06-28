class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return addTwoNumbersHelper(l1, l2, 0);
    }

private:
    ListNode* addTwoNumbersHelper(ListNode* l1, ListNode* l2, int carry) {
        // Base case: if both lists are empty and there's no carry, return null
        if (l1 == nullptr && l2 == nullptr && carry == 0) {
            return nullptr;
        }

        int sum = carry;
        if (l1 != nullptr) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != nullptr) {
            sum += l2->val;
            l2 = l2->next;
        }

        ListNode* newNode = new ListNode(sum % 10); // Create a new node with the sum value
        newNode->next = addTwoNumbersHelper(l1, l2, sum / 10); // Recurse for the next nodes with the carry

        return newNode;
    }
};
