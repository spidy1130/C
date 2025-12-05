//Write a function to count words in a given string
#include<stdio.h>
#include<string.h>
void wcount(char b[]);
int main()
{
    char a[20];
    printf("enter your string");
    fgets(a,20,stdin);
    a[strlen(a)-1]='\0';
    wcount(a);
    return 0;
}
void wcount(char b[])
{
    int a=0,i;
    for(i=0;b[i];i++)
    {
        if((i==0)&&(b[i]!=32))
         a=1;
        if((b[i]!=32)&&(b[i-1]==32))
         a++;
    }
    printf("no. of words=%d",a);
}