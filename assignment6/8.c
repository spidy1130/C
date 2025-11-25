#include<stdio.h>
int main()
{
    int a;
    printf("enter year");
    scanf("%d",&a);
    a=a%4;
    if(a==0)
      printf("it is a leap year");
    else
    printf("normal yaer");
    return 0;  
}