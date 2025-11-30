#include<stdio.h>
void Fibonacci(int);
int main()
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    Fibonacci(a);
    return 0;
}
void Fibonacci(int n)
{
    int a=0,b=1,k,i;
    printf("%d\t%d\t",a,b);
    for(i=1;i<=n-2;i++)
    {
        k=a+b;
        printf("%d\t",k);
        a=b;
        b=k;
    }
}