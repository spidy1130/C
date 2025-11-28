#include<stdio.h>
int main()
{
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    switch (x%2==0)
    {
    case 0:
        printf("%d",x);
        break;
    case 1:
       printf("%d",x+1);
       break;
    
    default:
        break;
    }
    return 0;
}