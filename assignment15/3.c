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
    if(n==0)
      return 0;
    return 2*n+nat(n-1);   
}