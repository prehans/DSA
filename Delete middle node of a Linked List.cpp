class Solution {
public: 
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp=head;
        ListNode *ptr=head;
        int n=0,middle;
        if (head == NULL)
        return NULL;
      if (head->next == NULL) 
      {
        delete head;
        return NULL;
      }
        while(temp)
        {
            temp=temp->next;
            n++;
        }
        middle=(n/2);
        temp=head;
        while(middle-->1)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }

};
