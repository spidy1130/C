#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=1;i<=5;i++)
    {
        a='A';
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
             printf("%c",a++);
            else
             printf(" ");
        }
         a--;
        for(j=6;j<=9;j++)
        {
            if(j<=i+4)
             printf("%c",--a);
            else
             printf(" ");
        }
        printf("\n");

    }
    return 0;
}