#include<stdio.h>
int main()
{
    int  a,b;
    printf("enter first no;");
    scanf("%d",&a);
    printf("enter second no;");
    scanf("%d",&b);
    if(a==b)
        printf("both are same;");
    else
       {
          if(a>b)
          printf("first no. is greater;");
          else
          printf("second no. is greater;");
       }    
    
    return 0;
}