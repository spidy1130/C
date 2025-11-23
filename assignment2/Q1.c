#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three no: ");
    scanf("%d %d %d",&a,&b,&c);
    int d=(a+b+c)/3;
    printf("avg of %d ,%d and %d is %d",a,b,c,d);
    return 0;
}