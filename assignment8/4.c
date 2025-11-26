#include<stdio.h>
int nain()
{
    int i,n,sum=0;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        sum=sum+(2*i-1);
    }
    printf("%d",sum);
    return 0;
}