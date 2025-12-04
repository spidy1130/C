#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    printf("enter your string\n");
    fgets(a,20,stdin);
    strcpy(b,a);
    printf("%s",strupr(b));
    return 0;
}