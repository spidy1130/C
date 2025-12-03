#include<stdio.h>
void repeated(int arr[] );
int main()
{
    int arr[10],n;
    printf("enter 10 elements:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("unique elements are ");
    repeated(arr);
    return 0;
}
void repeated(int arr[])
{
    for(int i=0;i<10;i++)
    {
        int c=0;
        for(int j=0;j<10;j++)
        {
            if(i!=j)
            {
               if(arr[i]==arr[j])
                  c++;
            }
        }
        if(c==0)
         printf("%d  ",arr[i]);
    }
}