#include<stdio.h>
int main()
{
    int i,j,a;
    for(i=1;i<=4;i++)
    {
      a='A';  
       for(j=1;j<=4;j++)
        {
            if(j>=i)
            printf("%c",a++);
            else
            printf(" ");
        }
     a--;
      for(j=5;j<=7;j++)
       {
        if(j<=8-i)
         printf("%c",--a);
        else
          printf(" ");
       } 
        printf("\n");
    }
    return 0;
}