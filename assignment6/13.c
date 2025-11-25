#include<stdio.h>
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    if((a%2==0)&&(a%3==0))
       printf("divisible by both 2 and 3");
    else if(a%2==0)
       printf("divisible by 2");
    else if(a%3==0)
       printf("divisible by 3");   
    else
       printf("divisible by other no.");

    return 0;
    
}