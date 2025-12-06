#include<stdio.h>
int main()
{
    int a=10,*b,**c,***d;
    b=&a;
    c=&b;
    d=&c;
    printf("%d %d %d %d",a,*b,**c,***d);
    return 0;
}