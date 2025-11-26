#include<stdio.h>
int main()
{
    int a,b=0,i;
    for(a=2;a<=100;a++)
    {
        for(i=2;i<=a/2;i++)
        {
            b=0;
            if(a%i==0)
            {
                b=1;
                break;
            }
        }
      if(b==0)
         printf("%d ",a);
    }
 return 0;
}