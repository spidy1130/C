#include<stdio.h>
int main()
{
    int a;
    printf("enter a no.");
    scanf("%d",&a);
    if(a<0)
      printf("it is a negative no.");
    else if(a>0)
      printf("it is a positive no.");
    else
      printf("it is a zero");

  return 0;    
}