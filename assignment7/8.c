#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a no.");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i*i);
        i++;
    }

  return 0;
}