#include<iostream>
#include<stdio.h>
#include<stdlib.h>

//Display is not working properly...

struct Node
{
  int data;
  struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
  int i;
  struct Node *t,*last;
  first=(struct Node *)malloc(sizeof(struct Node));
  first->data=A[0];
  first->next=NULL;
  last=first;

  for(i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
  }
}

void Display(struct Node *p)
{
  while (p!=NULL)
  {
    std::cout<<p->data<<" ";
    p=p->next;
  }
  
}

int main()
{
  int A[]={3,5,7,10,15};
  create(A,5);
  Display(first);
  return 0;
}