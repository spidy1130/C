#include<stdio.h>
int main()
{
    int a=0,b=1,k,i,n;
    printf("enter nth no. to find sereis;");
    scanf("%d",&n);
    printf("%d\t%d\t",a,b);
    for(i=1;i<=n-2;i++)
    {
        k=a+b;
        printf("%d\t",k);
        a=b;
        b=k;
    }
   
   return 0;
}