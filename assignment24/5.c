#include<stdio.h>
int* f1()
{
    int a;
    printf("enter a no");
    scanf("%d",&a);
    return &a;
}
int main()
{
   int *p;
   p=f1();
   printf("your no.is %d",*p);
   return 0;
}