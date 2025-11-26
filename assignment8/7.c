#include<stdio.h>
int main()
{
    int i,fac=1;
    printf("enter a no;");
    scanf("%d",&i);
    
    while(i>=1)
    {
        fac=fac*i;
        i--;
    }
    printf("factorial =%d",fac);
    return 0;
}