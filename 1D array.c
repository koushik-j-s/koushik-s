#include<stdio.h>
void main()
{
  int a[3],n,i;
  printf("enter the size of array\n");
  scanf("%d",&n);
  printf("enter the elements of array\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("the elements of array are\n");
  for(i=0;i<n;i++)
    {
      printf("%d\n",a[i]);
    }
}
