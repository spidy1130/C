//Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char a[10];
    int i;
    printf("enter your string\n");
    gets(a);
    for (i=0;a[i];i++);
    printf("length of string is %d",i);
    return 0;
}