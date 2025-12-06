#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a ,b;
    printf("enter two nos");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("first no. is %d\nsecond no. is %d",a,b);
    return 0;
}
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}