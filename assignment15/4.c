#include<stdio.h>
int nat(int);
int main()
{
    int a;
    printf("enter a no.to natural:");
    scanf("%d",&a);
    printf("sum =%d",nat(a));
    return 0;
}
int nat(int n)
{
    if(n==1)
      return 1;
    return n*n+nat(n-1);   
}