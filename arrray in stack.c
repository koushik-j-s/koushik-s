#include<stdio.h>
#include<limits.h>
#define MAX_SIZE 20

  int arr[MAX_SIZE];
  int top=-1;


void push(int val)
{
  if(top==MAX_SIZE-1)
  {
    printf("Stack Overflow\n");
    return;
  }
  arr[++top] = val;

}
int pop()
{
  if(top==-1)
  {
    printf("Stack is empty\n");
    return INT_MIN;
  }
  return arr[top--];
}

  int peak()
  {
    if(top==-1)
    {
      printf("Stack is empty\n");
      return INT_MIN;
    }
    return arr[top];
  }
  int main()
  {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("after pushing 5 element: %d\n", peak());
    printf("top element: %d\n", peak());
    printf("Poped  element: %d\n", pop());
    printf("poped element ; %d\n", pop());
    printf("after poping  element: %d\n", peak());
    printf("top element: %d\n", peak());
    return 0;
  }

