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
        printf(" %d",2*n);
        nat(n-1);
    }
}