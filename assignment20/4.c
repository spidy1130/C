//Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
void upp(char b[]);
int main()
{
    char a[20];
    printf("enter your string");
    fgets(a,20,stdin);
    upp(a);
    return 0;
}
void upp(char b[])
{
    printf("%s",strupr(b));
}