#include<stdio.h>
int main()
{
    int i,j,a=0;
    for(i=1;i<=4;i++)
    {
      a=0;  
     for(j=1;j<=4-i;j++)
       printf(" ");
     for(j=1;j<=i;j++)
       printf("%d",++a);
     a--;
      while(a)
      printf("%d",a--);
        
        printf("\n");
    }
    return 0;
}