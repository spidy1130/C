#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("enter a no;");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+2*i;
        i++;
    }
    printf("%d",sum);

    return 0;
}