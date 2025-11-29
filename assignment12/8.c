#include<stdio.h>
int fact(int);
int per(int,int);
int main()
{
    int n,r;
    printf("enter n and r ;");
    scanf("%d %d",&n,&r);
    printf("%d",per(n,r));
    return 0;
}
int per(int n,int r)
{
   return fact(n)/fact(n-r);
}
int fact(int b)
{
    int i,t=1;
    for(i=2;i<=b;i++)
      t=t*i;
    return t;
}