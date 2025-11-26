#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a no.");
    scanf("%d",&n);
    do
    {
        printf("%d\n",2*i);
        i++;
    } while (i<=n);
  return 0;
    
}