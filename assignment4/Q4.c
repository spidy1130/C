#include<stdio.h>
int main()
{
    int a,b,t;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("a=%d \nb=%d",a,b);
    return 0;
}