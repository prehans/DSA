//# DSA
//Check if a LinkedList is palindrome or not.
class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       Node *slow=head;
       Node *fast=head;
       while(fast && fast->next)
       {
           slow=slow->next;
           fast=fast->next->next;
       }
       Node *prev=NULL;
       Node *nextptr=NULL;
       Node *curr=slow;
       while(curr!=0)
       {
        nextptr=curr->next;
         curr->next=prev;
         prev=curr;
         curr=nextptr;
       }
       Node *last=prev;
       Node *temp=head;
       while(last)
       {
           if(last->data!=temp->data)
           return false;
           last=last->next;
           temp=temp->next;
       }
      return true; 
    }
};
