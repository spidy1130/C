#include<stdio.h>
void sort(int *);
int main()
{
    int i,a[5];
    printf("enter 5 value");
    for(i=0;i<5;i++)
      scanf("%d",&a[i]);
    sort(a);
   for(i=0;i<5;i++)
      printf("%d ",a[i]);
    return 0;
}
void sort(int *p)
{
   int i,s,j;
    for(i=0;i<5-1;i++)
    {
      for(j=i+1;j<5;j++)
      {
        if(*(p+i)>*(p+j))
        {
          s=*(p+i);
         *(p+i)=*(p+j);
          *(p+j)=s;
        }
      }
    }
   // return p;
}
