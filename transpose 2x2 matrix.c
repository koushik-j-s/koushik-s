#include<stdio.h>
void main()
{
  int a[2][2],b[2][2],i,j,n;
  printf("enter the element of the matrix\n");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          b[i][j]=a[j][i];
        }
    }
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          printf("%d\t",b[i][j]);
        }
      printf("\n");
    }
}

