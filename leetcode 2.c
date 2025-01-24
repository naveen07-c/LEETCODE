#include<stdio.h>
#include<stdlib.h>
struct node{
  int val;
  struct node *next;
};
struct node* add(struct node *head,int data){
  struct node *current=malloc(sizeof(struct node));
  current->val=data;
  current->next=NULL;
  if(head==NULL){
    return current;
  }
   else{
   struct node *ptr=head;
   while(ptr->next!=NULL){
    ptr=ptr->next;
   }
   ptr->next=current;
   return head;
   }
}
struct node* add2(struct node*head1,struct node*head2,struct node *head3){
struct node *ptr1=head1;
struct node *ptr2=head2;
struct node *ptr3=head3;
int sum=0,carry=0;
while(ptr1!=NULL||ptr2!=NULL){
  if(ptr1!=NULL && ptr2!=NULL){
    sum=ptr1->val+ptr2->val+carry;
    if(sum>=10){
      carry=1;
      sum=sum-10;
     ptr3= add(ptr3,sum);
      sum=0;
    }
    else{
     carry=0; 
     ptr3=add(ptr3,sum);
     sum=0;
    }
    
  }
  else if(ptr1!=NULL &&ptr2==NULL){
   sum=ptr1->val+carry;
    if(sum>=10){
      carry=1;
      sum=sum-10;
      ptr3=add(ptr3,sum);
      sum=0;
    }
    else{
     carry=0; 
     ptr3=add(ptr3,sum);
     sum=0;
    }
  }
  else if(ptr1==NULL &&ptr2!=NULL){
   sum=ptr2->val+carry;
    if(sum>=10){
      carry=1;
      sum=sum-10;
      ptr3=add(ptr3,sum);
      sum=0;
    }
    else{
     carry=0; 
     ptr3=add(ptr3,sum);
     sum=0;
    }
  }
  if(ptr1!=NULL){
   ptr1=ptr1->next;
   }
     if(ptr2!=NULL){
    ptr2=ptr2->next;
    }
}
if(carry!=0){
ptr3=add(ptr3,carry);
}
return ptr3;
}


void print(struct node *head){
  struct node *ptr=head;
  while(ptr!=NULL){
  printf("|%d|->",ptr->val);
  ptr=ptr->next;
  }
  printf("NULL");
}
int main()
{
    struct node *head1=NULL;
    struct node *head2=NULL;
   struct node *head3=NULL;
    head1=add(head1,9);
    head1=add(head1,9);
    head1=add(head1,9);
    head1=add(head1,9);
   head1=add(head1,9);
    head1=add(head1,9);
    head1=add(head1,9);
    
    
  
    head2=add(head2,9);
    head2=add(head2,9);
    head2=add(head2,9);
    head2=add(head2,9);
    head3=add2(head1,head2,head3);
    print(head1);
    printf("\n");
    print(head2);
    printf("\n");
    print(head3);
    printf("\n");
    printf("c");
    return 0;
}