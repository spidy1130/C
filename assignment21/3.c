/*Write a program to read and display a 2D array of strings in C language*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char b[5][20];
    printf("enter your strings");
    for(i=0;i<5;i++)
    {
       fgets(b[i],20,stdin);
    }
    for(i=0;i<5;i++)
     printf("%s\n",b[i]);
    return 0;
}