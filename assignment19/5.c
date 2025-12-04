//Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("enter your string\n");
    fgets(a,20,stdin);
    printf("%s",strlwr(a));
    return 0;
}