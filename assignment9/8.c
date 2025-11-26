#include<stdio.h>
int main()
{
    int i,a,b=0,n;
    printf("enter a no;");
    scanf("%d",&n);
    for(a=n+1;1;a++)
    {
        b=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            b=1;
        }
        if(b==0)
        {
            printf("%d",a);
             break;
        }
    }
}