#include<stdio.h>
int main()
{
    char a;
    printf("enter an alphabet");
    scanf("%c",&a);
    if((a>='A')&&(a<='Z'))
      printf("uppercase");
    else if((a>='a')&&(a<='z'))
      printf("lowercase");
    else
       printf("not an alphabet");

    return 0;
}