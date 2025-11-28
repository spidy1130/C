#include<stdio.h>
int main()
{
    int v;
    printf("enter a year");
    scanf("%d",&v);
    switch (v%4)
    {
    case 1:
        printf("not leep year");
        break;
    case 0:
        printf("leep year");
        break;
    
    default:
        break;
    }
}