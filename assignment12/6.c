#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    printf("%d",fact(a));
    return 0;
}
int fact(int b)
{
    int i,t=1;
    for(i=2;i<=b;i++)
      t=t*i;
    return t;
}