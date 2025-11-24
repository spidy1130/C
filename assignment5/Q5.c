#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a no:");
    scanf("%d",&a);
    printf("enter a digit:");
    scanf("%d",&b);
    a=(a*10)+b;
    printf("result is %d",a);
    return 0;
}