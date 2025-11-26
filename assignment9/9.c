#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,t=0,b;
    printf("enter a no; to find armstrong");
    scanf("%d",&b);
    n=b;
    while(n!=0)  
    {  
       n=n/10;  
       t++;  
    } 
    int r=0, c=b;
    while(c!=0)
    {
        a=c%10;
        r=r+pow(a,t);
        c=c/10;
    }
    if(r==b)
      printf("given no is armstrong no");
    else 
    {
        printf("given no is not armstrong no");
    }
    return 0;
}