#include<stdio.h>
int subtraction(int a,int b)
{
  return a-b;
}
int main()
{
int n1,n2,result;
printf("enter first number : ");
scanf("%d",&n1);
printf("enter second number : ");
scanf("%d",&n2);
result=subtraction(n1,n2);
printf("the difference between %d and %d is %d",n1,n2,result);
  return 0;
}
