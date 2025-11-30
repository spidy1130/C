#include<stdio.h>
int fact(int);
int main()
{
    int i,n,sum=0;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+ fact(i)/i;
    }
    printf("%d",sum);
    return 0;
}
int fact(int b)
{
    int i,t=1;
    for(i=2;i<=b;i++)
      t=t*i;
    return t;
}