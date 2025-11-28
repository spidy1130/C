#include<stdio.h>
int main()
{
    int x;
    printf("enter day no.");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("yep! you're right");
        break;
    case 2:
        printf("boring;;");
        break;
    case 3:
        printf("repeat it::");
        break;
    case 4:
        printf("we are close");
        break;
    case 5:
        printf("let's try again");
        break;
    case 6:
        printf("here we are!");
        break;
    case 7:
        printf("yep! weekend");
        break;
    
    default:
        printf("invalid no.");
        break;
    }
    return 0;
}