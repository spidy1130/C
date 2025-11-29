#include<stdio.h>
void nat(int);
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    nat(a);
    return 0;
}
void nat(int b)
{
    int i;
    for(i=1;i<=b;i++)
     printf("%d\t",2*i-1);
}