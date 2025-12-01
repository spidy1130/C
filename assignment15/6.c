#include<stdio.h>
int nat(int);
int main()
{
    int a;
    printf("enter a no.to find factorial:");
    scanf("%d",&a);
    printf("sum =%d",nat(a));
    return 0;
}
int nat(int n)
{
    if(n==1||n==0)
      return 1;
    return n*nat(n-1);   
}