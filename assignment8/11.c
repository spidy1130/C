#include<stdio.h>
int main()
{

    int i=1,a,b,rev=0;
    printf("enter a no;");
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        rev=rev*10 +b;
        i++;
    }
    printf("%d",rev);

  return 0;
}