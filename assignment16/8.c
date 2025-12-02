#include<stdio.h>
int main()
{
    int n,i,s,j;
    printf("enter the no. of element");
    scanf("%d",&n);
    int an[n];
    printf("enter %d values",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&an[i]);
    }
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(an[i]>an[j])
        {
          s=an[i];
          an[i]=an[j];
          an[j]=s;
        }
      }
    }
      printf("second smaleest no.=%d ",an[1]);
    return 0;
}