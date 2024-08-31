#include<stdio.h>
void swap(int X,int Y)
{
  int temp = x;
  x = y;
  y = temp;
}
int main()
{
  int a=10,b=20;
  printf("Before swapping a=%d,b=%d",a,b);
  swap(a,b);
  printf("After swapping a=%d,b=%d",a,b);  
  return 0;
}

