#include<stdio.h>
int prime(int);
int main()
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    if( prime(a)==0)
    printf("prime no");
    else
    printf("not prime no");
    return 0;
}
int prime(int a)
{
    int i,c=0;
    for(i=2;i<a/2;i++)
    {
        if(a%i==0)
        {
            c=1;
            break;
        }
    }
    return c;
}