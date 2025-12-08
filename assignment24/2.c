#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *p, avg=0;
    int m;
    printf("enter the no. of value ,you want to enter\n");
    scanf("%d",&m);
    fflush(stdin);
    p=(float*)calloc(m,sizeof(float));
    printf("enter the %d values",m);
    for(int i=0;i<m;i++)
    {
        scanf("%f",&p[i]);
       //  printf("%d",p[i]);
        avg=avg + p[i];
    }
    printf("average of your %d values is %f ",m,avg/m);
    free(p);
    return 0;
}