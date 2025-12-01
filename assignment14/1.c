#include<stdio.h>
void nat(int);
int main()
{
    int a;
    printf("enter a no.to natural:");
    scanf("%d",&a);
    nat(a);
    return 0;
}
void nat(int n)
{
    if(n>0)
    {
        nat(n-1);
        printf(" %d",n);
    }
}