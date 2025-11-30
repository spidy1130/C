#include<stdio.h>
int hcf(int,int);
int main()
{
    int a ,b;
    printf("enter two no's;");
    scanf("%d %d",&a,&b);
    printf("hcf of %d and %d is %d",a,b,hcf(a,b));
    return 0;
}
int hcf(int a,int b)
{
    int i,hcf;
    for(i=a;i>=2;i--)
    {
        hcf=b%i;
        if(hcf==0)
         hcf=a%i;

        if(hcf==0)
        {
            break;
        }
    }
   return i;
}