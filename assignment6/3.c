#include<stdio.h>
int main()
{
    int a;
    printf("enter a no:");
    scanf("%d",&a);
    a=a%2;
    if(a==0)
    printf("even");
    else
    printf("odd");
    return 0;
    
    
}