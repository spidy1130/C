#include<stdio.h>
int main()
{
    int i=0,j=1,a,n,m;
    printf("enter a no.to find nth no;");
    scanf("%d",&m);
    for(n=1;n<=m-2;n++)
    {
      a=i+j;
      i=j;
      j=a;
    }
   printf("%d;",a);
  return 0;
}