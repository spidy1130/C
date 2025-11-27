#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{
  system("cls");
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
      printf("\n");
    }
 return 0;
}