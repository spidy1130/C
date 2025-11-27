#include<stdio.h>
int main()
{
    int i,j,a=0;
    for(i=1;i<=7;i++)
    {
        a=0;
        for(j=1;j<=4;j++)
        {
            if(j<=5-i)
             printf("%d",++a);
            else
             printf(" ");
        }
        if(i==1)
          a--;
        a++;
        for(j=5;j<=7;j++)
        {
            if(j>=i+3)
             printf("%d",--a);
            else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}