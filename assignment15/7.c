#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b;
    printf("enter two numbers to find its hcf:");
    scanf("%d %d",&a,&b);
    printf("hcf =%d",hcf(b,a%b));
    return 0;
}
int hcf(int a,int b)
{
    if(b==0)
      return a ;
    hcf(b,a%b); 
}