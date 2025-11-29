 /*Write a function to calculate the 
    area of a circle. (TSRS)*/
#include<stdio.h>
int aoc(int);
int main()
{
    float a,v;
   printf("enter a no.");
   scanf("%f",&a);
   v=aoc(a);
   printf("%f",v);
   return 0;
}
int aoc(int r)
{
    float area;
    area=3.14*r*r;
    return area;
}
