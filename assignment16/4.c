#include<stdio.h>
int main()
{
    int an[10],i,s,t;
    printf("enter 10 values");
    for(i=0;i<10;i++)
    {
      scanf("%d",&an[i]);
      if(i==0)
        s=an[0];
      if(an[i]>s){
       // t=s;
        s=an[i];
      }
    }
    printf("greatest no.=%d",s);
    //printf("2nd greatest no.=%d",t);
    return 0;
}