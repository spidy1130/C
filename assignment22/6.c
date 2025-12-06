#include<stdio.h>
#include<string.h>
void length(char *);
int main()
{
    char a[20];
    printf("enter your string");
    gets(a);
    length(a);
    // printf("first no. is %s\nsecond no. is %s",a,b);
    return 0;
}
void length(char *p)
{
   int s=strlen(p);
   printf("length of string is %d ",s);
}