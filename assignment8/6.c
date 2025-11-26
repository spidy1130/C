#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter a no;");
    scanf("%d",&n);
    do
    {
        sum=sum+(i*i*i);
        i++;
    } while (i<=n);
    printf("%d",sum);
    return 0;    
}