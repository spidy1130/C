#include<stdio.h>
int main()
{
    int an[10],i,sum=0;
    printf("enter 10 values");
    for(i=0;i<10;i++)
    {
      scanf("%d",&an[i]);
      sum=sum+an[i];
    }
    printf("sum of total values=%d",sum);
    return 0;
}