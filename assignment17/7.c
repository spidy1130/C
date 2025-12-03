#include<stdio.h>
int repeated(int arr[] );
int main()
{
    int arr[10],n;
    printf("enter 10 elements:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    n=repeated(arr);
    printf("total repeated elements are %d",n/2);
    return 0;
}
int repeated(int arr[])
{
    int c=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(i!=j)
            {
               if(arr[i]==arr[j])
                  c++;
            }
        }
    }
    return c;
}