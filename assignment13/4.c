#include<stdio.h>
int prime(int);
int main()
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    printf("next prime no. is %d",prime(a));
    return 0;
}
int prime(int a)
{
    int i,c=0,n;
    for(n=a;1;a++)
    {
        c=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            c=1;
        }
        if(c==0)
        {
             break;
        }
    }
    return a;
}