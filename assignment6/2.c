#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a no.");
    scanf("%d",&a);
    b = a%5;
    //printf("%d\n",b);
    if(b==0) 
    {
       printf("divisible by 5");
    }   
    else
       printf("not dividible by 5");
    return 0;
}