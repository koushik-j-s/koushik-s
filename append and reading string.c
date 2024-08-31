#include<stdio.h>
void main()
{
  FILE *fp;
  char c[100];
  fp=fopen("file.text cc.txt","w");
  fputc('a',fp);
  fputc('hello',fp);
}
