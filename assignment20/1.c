//Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
int lenost(char b[]);
int main()
{
    char a[20];
    printf("enter your string\n");
    fgets(a,20,stdin);
    printf("%d",lenost(a));
    return 0;
}
int lenost(char b[])
{
    return strlen(b);
}