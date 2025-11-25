#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a ,&b ,&c);
    if(a==b && b==c)
      printf("all is equal");
    else if(a>b && a>c)
      printf("a=%d is greatest",a);
    else if(b>c)
      printf("b=%d is greatest",b);
    else
      printf("c=%d is greatest",c);
      
    return 0;
}