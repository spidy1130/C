#include<stdio.h>
int main()
{
    int a=0,b=1,k,i,n;
    printf("enter no. to find in sereis;");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=a+b;
        if(k==n)
        {
            break;
        }
        a=b;
        b=k;
    }
    if(i==n+1)
     printf("given no. is not in series");
    else
     printf("no. is present in series");
   
   return 0;
}