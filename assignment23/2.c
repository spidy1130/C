#include<stdio.h>
#include<string.h>
struct Employee input();
struct Employee
{
   int id;
   char name[20];
   float salary;
};
int main()
{
    struct Employee a;
    a=input();
    return 0;
}
struct Employee input()
{
    struct Employee b;
    printf("enter employee id,name and salary");
    scanf("%d",&b.id);
    fflush(stdin);
    gets(b.name);
    scanf("%f",&b.salary);
    return b;
}
