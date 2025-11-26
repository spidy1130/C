#include<stdio.h>
int main()
{
    int i,m,n,a;
    printf("enter to numbers to find its hcf");
    scanf("%d%d",&m,&n);
    for(i=n;i>=2;i--)
    {
        a=m%i;
        if(a==0)
         a=n%i;

        if(a==0)
        {
            break;
        }
    }
    if(i==1)
     printf("HCF of given numbers is 1");
    else
     printf("HCF of given numbers is %d",i);


  return 0;
}