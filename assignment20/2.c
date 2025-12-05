//Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
void strev(char b[]);
int main()
{
    char a[20];
    printf("enter your string\n");
    fgets(a,20,stdin);
    strev(a);
    printf("%s",a);
    return 0;
}
void strev(char b[])
{
     strrev(b);
}