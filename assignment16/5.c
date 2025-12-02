#include<stdio.h>
int main()
{
    int an[10],i,s;
    printf("enter 10 values");
    for(i=0;i<10;i++)
    {
      scanf("%d",&an[i]);
      if(i==0)
        s=an[0];
      if(an[i]<s)
        s=an[i];
    }
    printf("smallest no.=%d",s);
    return 0;
}