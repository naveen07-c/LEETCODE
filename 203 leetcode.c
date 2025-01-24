#include<stdio.h>
#include<stdlib.h>

void add_end(struct node **head,int data){
   struct node *current=malloc(sizeof(struct node));
   current->val=data;
   current->next=NULL;
   if(*head==NULL){
    *head=current;
    return ;
    
   }
  
  struct node *ptr=*head;
  while(ptr->next!=NULL){
  ptr=ptr->next;
  }
  ptr->next=current;
}
int main()
{
    
    return 0;
}