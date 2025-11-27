#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=1;i<=7;i++)
    {
        a='A';
        for(j=1;j<=7;j++)
        {
            if(j<=8-i)
             printf("%c",a++);
            else
             printf(" ");
        }
        if(i==1)
          a--;
        //a++;
        for(j=8;j<=13;j++)
        {
            if(j>=i+6)
             printf("%c",--a);
            else
             printf(" ");
        }
        printf("\n");
    }
    return 0;
}