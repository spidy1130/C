#include<stdio.h>
int main()
{
   int n;
   printf("enter a no.");
   scanf("%d",&n);
   int i=n;
   while(i>=1)
   {
      printf("%d\n",2*i-1);
      i--;
   }
 return 0;
}