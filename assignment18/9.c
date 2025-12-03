#include<stdio.h>
int main()
{
    int a[3][3],i,j,s=0;;
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
           if(a[i][j]==0)
            s++;
        }
        //printf("\n");
    }
    if(s>(9/2))
      printf(" it is a sparse matrix");
    else
      printf(" it is not a sparse matrix");
    return 0;
}