#include<stdio.h>
int main()
{
    int i,m,a=0;
    printf("enter a no;");
    scanf("%d",&m);
    if(m==0||m==1)
     a=1;
    for(i=2;i<=m/2;i++)
    {
     if(m%i==0)
     {
       a=1;
       break;
     }
    }
    if(a==0)
      printf(" prime no.");
    else
      printf(" not prime no.");


  return 0;
}