#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter sides of triangles\n ");
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b))
      printf("it is a triangle");
    else
      printf("not a triangle");


  return 0;
}