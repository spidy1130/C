#include<stdio.h>
#include<string.h>
void sum(int *,int );
int main()
{
    int  a[10]={22,43,24,51,12,54,36,16,27,13};
    sum(a,10);
    return 0;
}
void sum(int *p,int size)
{
    int s=0,i;
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
}
