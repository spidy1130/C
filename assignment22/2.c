#include<stdio.h>
#include<string.h>
void swap(char *,char *);
int main()
{
    char a[20] ,b[20];
    printf("enter two strings");
    gets(a);
    gets(b);
    swap(a,b);
    printf("first no. is %s\nsecond no. is %s",a,b);
    return 0;
}
void swap(char *p,char *q)
{
    char temp[20];
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
}