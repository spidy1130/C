#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m, sum=0;
    printf("enter the no. of values you want to enter\n");
    scanf("%d",&m);
    int *p;
    p=(int*)malloc(m*sizeof(int));
    printf("enter %d values",m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    printf("the sum of %d no. is %d",m,sum);
    free(p);
    return 0;
}