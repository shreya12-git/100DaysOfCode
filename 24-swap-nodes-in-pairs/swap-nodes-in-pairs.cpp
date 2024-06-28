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
    void solve(ListNode* temp1,ListNode* temp2){
        if(temp1==NULL || temp2==NULL){
            return;
        }
        swap(temp1->val,temp2->val);
        solve(temp1->next ? temp1->next->next : NULL,temp2->next?temp2->next->next:NULL);
    }
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* t1=head;
        ListNode* t2=head->next;
        solve(t1,t2);
        return head;
    }
};