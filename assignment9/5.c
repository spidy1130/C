#include<stdio.h>
int main()
{
    int i,a,b,n;
    printf("enter two numbers; ");
    scanf("%d %d",&a,&b);
    for(i=a;i>=2;i--)
    {
      if(a%i==0 && b%i==0)
         break;
    }

    if(i==1)
     printf("these are co-prime numbers");
    else
    printf("not co-prime numebers");

 return 0;
}