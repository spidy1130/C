#include<stdio.h>
#include<string.h>
void sort(int *,int );
int main()
{
    int a[10]={22,43,24,51,12,54,36,16,27,13};
    sort(a,10);
    for(int i=0;i<10;i++)
      printf("%d\n",a[i]);
    return 0;
}
void sort(int *p,int b)
{
   int i,s,j;
    for(i=0;i<b-1;i++)
    {
      for(j=i+1;j<b;j++)
      {
        if(*(p+i)>*(p+j))
        {
          s=*(p+i);
         *(p+i)=*(p+j);
          *(p+j)=s;
        }
      }
    }
}