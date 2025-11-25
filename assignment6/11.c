#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the marks of sub1:");
    scanf("%d",&a);
    printf("enter the marks of sub2:");
    scanf("%d",&b);
    printf("enter the marks of sub3:");
    scanf("%d",&c);
    printf("enter the marks of sub4:");
    scanf("%d",&d);
    printf("enter the marks of sub5:");
    scanf("%d",&e);
    if(a>=33&&b>=33&&c>=33&&d>=33&&e>=33)
      printf("you have passed");
    else
      printf("you have failed");
    return 0;
}