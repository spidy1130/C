#include<stdio.h>
#include<stdlib.h>
int main()
{
  while(1)
  {
    int x,a,b;
    printf("\na. Addition");
    printf("\nb. Subtraction");  
    printf("\nc. Multiplication"); 
    printf("\nd. Division"); 
    printf("\ne. Exit");
    printf("\nenter your choice");
    scanf("%c",&x);
    switch(x)
    {
      case 'a':
        printf("enter two numbers");
        scanf("%d %d",&a,&b);
        printf("sum=%d",a+b);
        break;
      case 'b':
        printf("enter two numbers");
        scanf("%d %d",&a,&b);
        printf("diffrence=%d",a-b);
        break;
      case 'c':
        printf("enter two numbers");
        scanf("%d %d",&a,&b);
        printf("product=%d",a*b);
        break;
      case 'd':
        printf("enter two numbers");
        scanf("%d %d",&a,&b);
        printf("quotient=%d",a/b);
        break;
      case 'e':
        exit(0);
      default :
        printf("invalid choice");

    }
  }  
  return 0;
}