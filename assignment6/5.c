#include<stdio.h>
int main()
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    int b= printf("%d\n",a);
    if(b==4)
    printf("three digit no:");
    else
    printf("%d digit no:",b-1);
    return 0;
}