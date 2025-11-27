#include<stdio.h>
#include<windows.h>
#include<conio.h>

// #define ANSI_COLOR_RED "\x1b[31m"
// #define ANSI_COLOR_YELLOW "\x1b[33m"
// #define ANSI_COLOR_RESET "\x1b[0m"

int main()
{
  system("cls");
    int i,j,d=1000;
    for(i=1;i<=3;i++)
    {
     // system("color 8");
      for(j=1;j<=19;j++)
      {
        if(((j>=4-i)&&(j<=6+i))||((j>=14-i)&&(j<=16+i)))
         printf("*");
        else
         printf(" ");
      }
      printf("\n");
        Sleep(d);
    }
    for(i=1;i<=10;i++)
    {
      for(j=1;j<=19;j++)
      {
        if((i==1)&&(j==8))
         printf(" MAN ");
        if((i==1)&&(j>=8)&&(j<=12))
         continue;
        if((j>=i)&&(j<=20-i))
         printf("*");
        else
         printf(" ");
      }
      printf("\n");
       Sleep(d);
    }
    getch();
    return 0;
}