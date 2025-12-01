#include<stdio.h>
void nat(int);
int main()
{
    int a;
    printf("enter a no.to find its reverse:");
    scanf("%d",&a);
    nat(a);
    return 0;
}
void nat(int n)
{
    int k;
    if(n>0)
    {
        k=n%10;
        printf("%d",k);
        nat(n/10);
    }
}