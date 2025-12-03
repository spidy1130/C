#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("enter 1st 3*3 value of matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i+j==4)
            sum=sum+a[i][j];
        }
    }
    printf("sum of left diagonals=%d",sum);
    return 0;
}