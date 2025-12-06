#include<stdio.h>
#include<string.h>
int sum(int *,int );
int main()
{
    int s, a[10]={22,43,24,51,12,54,36,16,27,13};
    s=sum(a,10);
    printf("sum of all elements=%d",s);
    return 0;
}
int sum(int *p,int size)
{
    int s=0,i;
    for(i=0;i<size;i++)
    {
        s=s+ *(p+i);
    }
    return s;
}
