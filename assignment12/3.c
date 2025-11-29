#include<stdio.h>
int mod(int);
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    mod(a);
    if(mod(a)==0)
      printf("even no.");
    else
       printf("odd no.");
    return 0;
}
int mod(int b)
{
    b=b%2;
    return b;
}