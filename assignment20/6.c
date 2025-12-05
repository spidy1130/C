#include<stdio.h>
#include<ctype.h>
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
    int i,a=0,d=0;
    for(i=0;b[i];i++)
    {
        if(isalpha(b[i]))
         a++;
        if(isdigit(b[i]))
         d++;
    }
    if(a>=1 &&  d>=1)
     printf("string is alphanumeric");
    else
    printf("string is not alphanumeric");
}