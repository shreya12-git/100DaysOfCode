class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* f = head;
        ListNode* s = head;
        for(int i=0; i<n; i++)
        {
            f = f->next;
        }
		//below codition is extra added for size == n (not present in striver's code)
        if(f == NULL)
            return head->next;
        while(f->next != NULL)
        {
            f = f->next;
            s = s->next;
        }
        s->next = s->next->next;
        return head;
    }
};