#include<stdio.h>
#include<string.h>
struct Employee input();
void display(struct Employee a);
void highest(struct Employee *p, int size);
void sort(struct Employee *,int );
struct Employee
{
   int id;
   char name[20];
   float salary;
};
int main()
{
    struct Employee a[5];
    int i;
    for(i=0;i<5;i++){
      a[i]=input();
    }
    sort(a,5);
    for(i=0;i<10;i++){
      display(a[i]);
    }
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
void highest(struct Employee *p, int size)
{
  struct Employee temp = p[0];
  int i;
  for(i=0;i<size;i++)
  {
    if(temp.salary < p[i].salary)
      temp=p[i];
  }
  printf("highest sallary of employee");
  display(temp);
   

}
void display(struct Employee a)
{
   printf("\nemployee id=%d\nemployee name is %s\nsalary=%f",a.id,a.name,a.salary);
}
void sort(struct Employee *p,int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(p[i].salary >p[j].salary)
            {
                struct Employee t = p[i]; p[i]=p[j]; p[j]=t;
            }
        }
    }
}