#include<stdio.h>
int smpi(int,int,int);
int main()
{
    int p,r,t;
    printf("enter principle ammount , interest rate and time:");
    scanf("%d%d%d",&p,&r,&t);
    printf("Simple Interest is %d",smpi(p,r,t));
    return 0;
}
int smpi(int p, int r, int t)
{
    return (p*r*t)/100;     
}