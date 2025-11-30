#include<stdio.h>
int sqr(int);
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    printf("square of %d=%d",a,sqr(a));
    return 0;    
}
int sqr(int a)
{
    return a*a;
}