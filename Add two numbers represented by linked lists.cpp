class Solution
{   
public:
 
   Node *reverse(Node *head)
  {  
     Node *prev=NULL; 
     Node *curr=head;
     Node *ptr;
     
  while(curr) 
  {    
    ptr=curr->next; 
    curr->next=prev;
    prev=curr;
    curr=ptr;  
  }
     return prev;
  }
  struct Node* addTwoLists(struct Node* first, struct Node* second)
   {
      int sum,c=0;
      Node * res=NULL;
      Node *temp,*prev=NULL;
      Node *f1=reverse(first);
      Node *f2=reverse(second);
  while(f1 || f2)
  {
   sum=c+(f1? f1->data:0)+(f2 ? f2->data : 0);
   c=sum>=10 ? 1 :0;
   sum=sum%10;
   temp=new Node(sum);
   if(res==NULL)
      res=temp;
   else
      prev->next=temp;
      
      prev=temp;
   if(f1)   
    f1=f1->next;
   if(f2)
    f2=f2->next; 
  } 
  if(c>0)
   temp->next=new Node(c);
    
  Node *final=reverse(res);
   return final;
   
 }
};
