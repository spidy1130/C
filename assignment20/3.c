//Write a function to compare two strings
#include<stdio.h>
#include<string.h>
void cmp(char a[],char b[]);
int main()
{
    char a[20],b[20];
    printf("enter your 1st string\n");
    fgets(a,20,stdin);
    printf("enter your 2nd string\n");
    fgets(b,20,stdin);
    cmp(a,b);
    return 0;
}
void cmp(char a[],char b[])
{
    int l=strcmp(a,b);
    if(l==0)
     printf("both strings are same");
    else if(l== -1)
      printf("both are in dictionary order");
    else
    printf("opposite of dicyionary order");
}