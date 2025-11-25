#include<stdio.h>
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    if((a%3==0)&&(a%7==0))
      printf("divisible by by both 7 and 3");
    else if(a%3==0)
      printf("divisible by 3");
    else if(a%7==0)
      printf("divisible by 7");
    else
      printf("divisible by other no.");

 return 0;
}