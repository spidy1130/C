#include<stdio.h>
int main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    if((a>='a')&&(a<='z'))
      printf("lowercase alphabet");
    else if((a>='A')&&(a<='Z'))
      printf("uppercase alphabet");
    else if((a>='0')&&(a<='9'))
      printf("digit");
    else
      printf("special character");

  return 0;
}