#include<stdio.h>
#include<string.h>
void sort(int *,int );
int main()
{
    int a[10]={22,43,24,51,12,54,36,16,27,13};
    sort(a,10);
    // for(int i=0;i<10;i++)
    //   printf("%d\n",a[i]);
    return 0;
}
void sort(int *p,int b)
{
   int i,s,j;
    for(i=0;i<b;i++)
    {
      if(i==0)
        s=p[0];
      if(p[i]>s){
       // t=s;
        s=p[i];
      }
    }
    printf("greatest no.=%d",s);
}