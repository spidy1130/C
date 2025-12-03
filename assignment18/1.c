#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3];
    printf("enter 1st 3*3 value of matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter 2nd 3*3 value of matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        printf("|");
        for(j=0;j<3;j++)
        {
            
            printf("%4d",a[i][j]+b[i][j]);
        }
        printf("   |");
        printf("\n");
    }
    return 0;
}