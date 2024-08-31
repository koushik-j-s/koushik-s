#include<stdio.h>
#include<string.h>
struct employee
{
int id;
char name[50];
float salary;
char department[30];
};
int main()
{
  struct employee a;
  a.id=105;
  a.salary=25000.00;
  strcpy(a.name,"koushik");
  strcpy(a.department,"jdhksf");
  printf("employee name=%s\n",a.name);
  printf("employee id=%d\n",a.id);
  printf("employee salary=%f\n",a.salary);
  printf("employee department=%s\n",a.department);
  return 0;
}
