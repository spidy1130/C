#include<stdio.h>
void prmbtw(int ,int);
int main()
{
    int a,b;
    printf("enter min and max;");
    scanf("%d %d",&a,&b);
    prmbtw(a,b);
    return 0;
}
void prmbtw(int min,int max)
{
    int a,b=0,i;
    for(a=min;a<=max;a++)
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
}