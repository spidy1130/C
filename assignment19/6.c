//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    printf("enter your string\n");
    fgets(a,20,stdin);
    printf("%s",strrev(a));
    return 0;
}