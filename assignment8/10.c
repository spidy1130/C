#include<stdio.h>
int main()
{
    int i,m,n,a=0,flag=0;
    printf("enter two numbers;");
    scanf("%d %d",&m,&n);
    for(i=1;i<=n;i++)
    {
       a=m*i;
       if(a%n==0)
       {
        flag=1;
        break;
       }
    }
    if(flag==1)
     printf("lcm of numbers is %d",a);
    else
     printf("lcm of numbers is %d",m*n);


  return 0;
}