#include<stdio.h>
void nat(int);
int main()
{
    int a;
    printf("enter a no.to find its binary:");
    scanf("%d",&a);
    nat(a);
    return 0;
}
void nat(int n)
{
    int k;
    if(n>0)
    {
        k=n%2;
        nat(n/2);
        printf(" %d",k);
    }
}