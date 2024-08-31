#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char *name;
  name = malloc(1);
  name = realloc(name,100);
  strcpy(name,"Hello World");
  printf("%s\n",name);
  free(name);
  return 0;
}
