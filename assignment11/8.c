#include<stdio.h>
int main()
{
    int a,x;
    printf("enter a no;");
    scanf("%d",&x);
    switch (x>0)
    {
    case 1:
        printf("%d",-1*x);
        break;
    case 0:
        printf("%d",-1*x);
        break;
    
    default:
        break;
    }
  return 0;
}
