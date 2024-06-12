/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() :val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        ListNode* a=head;
        
        while(a!=NULL){
           v.push_back(a->val);
           a=a->next;
        }

        int i=0,j=v.size()-1;

        while(i<j) {
            if(v[i++]!=v[j--])return 0;
        }
        return 1;
    }
};