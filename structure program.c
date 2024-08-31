#include<stdio.h>
struct book
{
int num;
char name[50];
float price;
};
int main()
{
  struct book hp;
  hp.num=2;
  hp.price=100.0;
  strcpy(hp.name,"harry potter");
  printf("book number is %d\n",hp.num);
  printf("book name is %s\n",hp.name);
  printf("book price is %f\n",hp.price);
}
