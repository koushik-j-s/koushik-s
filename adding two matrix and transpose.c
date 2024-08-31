#include<stdio.h>
void main()
{
  int a[2][2],b[2][2],c[2][2],d[2][2],i,j;
  printf("enter the element of the matrix a\n");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
  printf("enter the element of the matrix b\n");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          scanf("%d",&b[i][j]);
        }
      c[i][j]=a[i][j]+b[i][j];

    }
  printf("elemets of the matrix c\n");
  for(i=0;i<2;i++)
    {
      for(j=0;j<2;j++)
        {
          printf("%d\t",c[i][j]);
        }
      printf("\n");
    }
 printf("the transpose of matrix is\n");
 for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      {
        d[i][j]=c[j][i];
      }
  }
for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
      {
        printf("%d\t",d[i][j]);
      }
    printf("\n");
  }
}
