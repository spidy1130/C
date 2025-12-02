// Write a program to sort elements of an array of size 10. Take array values from the
//user.
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
    for(i=0;i<n;i++)
      printf("%d ",an[i]);
    return 0;
}
/* #include <stdio.h>
int main()
{
    int count = 0;
    int a[5] = {1,4, 2, 4, 9}, b[5]={0};
    printf("Largest number position order in Entered  : ");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (b[i] < a[j])
            {
                b[i] = a[j];
                count=j;
            }
            
            if (j == 4)
            {
                printf(" %d",count+1);
                a[count] = 0;
            }
        }
    }
printf("\n After Arranging : ");

    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", b[i]);
    }
}