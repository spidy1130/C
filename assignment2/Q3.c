#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("enter principal amaount:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&r);
    printf("enter time(in year):"),
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("simple interest =%f",si);
    return 0;
}