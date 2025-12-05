//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
void palndrm(char b[]);
int main()
{
    char a[20];
    printf("enter your string");
    fgets(a,20,stdin);
    a[strlen(a)-1]='\0';
    palndrm(a);
    return 0;
}
void palndrm(char b[])
{
    int i;
    char str[20];
    strcpy(str,b);
    strrev(str);
    i=strcmp(str,b);
    
    if(i==0)
     printf("string is palindrome");
    else
     printf("string is not palindrome");
}