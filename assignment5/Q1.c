#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three digit no:");
    scanf("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    printf("sum is %d",a+b+c);
    return 0;
}