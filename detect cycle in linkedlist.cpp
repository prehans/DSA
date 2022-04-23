class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==0 || head->next==0)
            return 0;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=0&&fast->next!=0)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            break;
        }
        if(fast==0 || fast->next==0)
            return NULL;
        
            fast=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
    }
};
