#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("enter cost price of banana(1 dozen)");
    scanf("%d",&cp);
    printf("enter selling price of banana(1 dozen)");
    scanf("%f",&sp);
    cp=(cp/12)*25;
    sp=(sp/12)*25;
    if(sp>cp)
    {
        p=sp-cp;
        printf("profit is %f for 25 bananas ",p);
    }
    else
    {
        l=cp-sp;
        printf("loss is %d for 25 bananas",l);
    }
    return 0;
}