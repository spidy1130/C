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
void sort(int a[])
{
  int i,n,j,b[5];
  printf("enter a no. to move the array");
  scanf("%d",&n);
  for(i=0;i<5-n;i++)
  {
    b[i]=a[i+n];
  }
   for(i=0;i<5;i++)
      printf("%d \n",b[i]);
  for(i=0;i<n;i++)
   b[i+n]=a[i];
  for(i=0;i<5;i++)
   a[i]=b[i];
   // return (an);
}
