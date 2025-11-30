#include<stdio.h>
void pascal(int);
int fact(int);
int comb(int,int);
int main()
{
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    pascal(n);
    return 0;
}
void pascal(int n)
{
    int i,j;
    for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf("  ");
         
      for(j = 0; j <= i; j++)
         printf(" %3d", comb(i, j));

      printf("\n");
   }
}
int comb(int i,int j)
{
    return fact(i)/(fact(j)*fact(i-j));
}
int fact(int b)
{
    int i,t=1;
    for(i=2;i<=b;i++)
      t=t*i;
    return t;
}