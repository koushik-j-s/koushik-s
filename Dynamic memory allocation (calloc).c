#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char *name;
  name = calloc(10,2);
  name = realloc(name,20);
  strcpy(name,"Hello World  jgugkm");
  printf("%s\n",name);
  free(name);
  return 0;
}
