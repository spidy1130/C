#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a no:");
    scanf("%d",&a);
    b=a/2 *2;
    if(a==b)
    printf("even");
    else
    printf("odd");
    return 0;
}