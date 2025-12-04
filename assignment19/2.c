#include<stdio.h>
int main()
{
    char a[20],b;
    int i,c=0;
    printf("enter your string\n");
    fgets(a,20,stdin);
    printf("enter the char you want to count");
    scanf("%c",&b);
    for (i=0;a[i];i++)
    {
        if(a[i]==b)
           c++;
    }
    printf("%c has occured %d times",b,c);
    return 0;
}