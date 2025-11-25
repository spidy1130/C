#include<stdio.h>
int main()
{
    int a,c,b,D;
    float x,y;

    printf("enter coeffecient of x^2 ,x and constant");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    if (D<0)
      printf("imaginary roots");
    if(D==0)
    {
       printf("equal roots");
       x=-b/(2.0*a);
       printf("\nroots are = %f and %f",x ,x);

    }
    if(D>0)
    {
        printf("both are real and ditinct");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\nroots are = %f and %f",x ,y);
    }
 return 0;
    
}