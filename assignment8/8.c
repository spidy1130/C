#include<stdio.h>
int main()
{
    int i=0,n;
    printf("enter a no;");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("%d digit no.",i);
    return 0;
}