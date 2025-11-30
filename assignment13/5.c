#include<stdio.h>
void prime(int);
int main()
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    prime(a);
    return 0;
}
void prime(int b)
{
    int i,c=0,n,a=2;
   for(n=1;n<=b;)
    {
        c=0;
        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
           printf("%d  ",a);
           n++;
        }
        a++;
    }
}