#include<stdio.h>
int fib(int);
int main()
{
    int a,i;
    printf("enter a no:");
    scanf("%d",&a);
    for(i=0;i<a;i++)
      printf("%d ",fib(i));

    return 0;
}
int fib(int n)
{
    if(n==0||n==1)
      return n;
    return fib(n-1)+fib(n-2);
}