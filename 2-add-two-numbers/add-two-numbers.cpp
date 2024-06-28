class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* head = nullptr;
        ListNode* tail = nullptr; // To keep track of the last node in the result list
        int carry = 0;

        while (temp1 != nullptr || temp2 != nullptr || carry != 0) {
            int sum = carry;
            if (temp1 != nullptr) {
                sum += temp1->val;
                temp1 = temp1->next;
            }
            if (temp2 != nullptr) {
                sum += temp2->val;
                temp2 = temp2->next;
            }
            carry = sum / 10;
            ListNode* newNode = new ListNode(sum % 10); // Create a new node with the sum value

            if (head == nullptr) {
                head = newNode; // Set head if it's the first node
            } else {
                tail->next = newNode; // Link the new node to the end of the list
            }
            tail = newNode; // Move the tail to the new last node
        }
        return head;
    }
};
