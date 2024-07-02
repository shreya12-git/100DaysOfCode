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
    ListNode* removeNodes(ListNode* head,int max=-1) {
        if(head->next==NULL){
            max=head->val;
            return head;
        }
        ListNode* nextNode=removeNodes(head->next,max);
            if(head->val>=nextNode->val){
                head->next=nextNode;
                return head;
            }
            else{
                return nextNode;
            }
    }
};