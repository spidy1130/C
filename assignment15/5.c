#include<stdio.h>
int nat(int);
int main()
{
    int a;
    printf("enter a no.to natural:");
    scanf("%d",&a);
    printf("sum =%d",nat(a));
    return 0;
}
int nat(int n)
{
   int k,s=0;
   if(n>0)
      return nat(n/10)+n%10;
     
}