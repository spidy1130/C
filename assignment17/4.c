#include<stdio.h>
void sort(int a[],int);
int main()
{
    int i,a[5];
    printf("enter 5 value");
    for(i=0;i<5;i++)
      scanf("%d",&a[i]);
    sort(a,5);
   for(i=0;i<5;i++)
      printf("%d ",a[i]);
    return 0;
}
void sort(int a[],int d)
{
  int i,n,k,j;
  printf("enter a no. to move the array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    j=a[0];
    for(k=0;k<d-1;k++)
    {
      a[k]=a[k+1];
    }
    a[d-1]=j;
  }
}  
