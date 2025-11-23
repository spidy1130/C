#include<stdio.h>
int main()
{
    char a,b,c;
    printf("enter 3 characters:");
    scanf("%c%c%c",&a,&b,&c);
    printf("ascii value of %c,%c and %c is %d,%d and %d",a,b,c,a,b,c);
    return 0;
}