//Write a function to transform a string into lowercase
#include<stdio.h>
#include<string.h>
void lwr(char b[]);
int main()
{
    char a[20];
    printf("enter your string");
    fgets(a,20,stdin);
    lwr(a);
    return 0;
}
void lwr(char b[])
{
    printf("%s",strlwr(b));
}