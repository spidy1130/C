#include<stdio.h>
int main()
{
    int a[10],i,soe=0,soo=0;
    printf("enter 10 values");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
         soe=soe + a[i];
        else
         soo=soo +a[i];
    }
    printf("sum of even nos=%d",soe);
    printf("\nsum of odd nos=%d",soo);
    return 0;
}