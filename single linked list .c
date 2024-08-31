#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node* createnode(int data)
{
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=data;
  newnode->next=NULL;
  return newnode;
}
void insertatbeginning(struct node** head,int data)
{
  struct node*newnode=createnode(data);
  newnode->next=*head;
  *head = newnode;
}
void printlist(struct node* head)
{
  struct node* temp=head;
  while(temp!=NULL)
    {
      printf("%d->",temp->data);
      temp=temp->next;
    }
  printf("NULL\n");
}
int main()
{
  struct node* head=NULL;
  insert at beginning(&head,40);
  insert at beginning(&head,30);
  insert at beginning(&head,20);
  insert at beginning(&head,10);
  printf("Linked list: ");
  print list(head);
  return 0;
}

