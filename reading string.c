#include<stdio.h>
int main()
{
  FILE *fp;
  char c[100];
  fp = fopen("file.text cc.txt","r");
  fgets(c,6,fp);
  printf("character is %s\n",c);
  fclose(fp);
  return 0;
}
