#include<stdio.h>
int lcm(int,int);
int main()
{
    int a ,b;
    printf("enter two no's;");
    scanf("%d %d",&a,&b);
    printf("lcm of %d and %d is %d",a,b,lcm(a,b));
    return 0;
}
int lcm(int a,int b)
{
    int i,lcm;
    for(i=2;i<=b;i++)
    {
        lcm=a*i;
        if(lcm%b==0)
        {
            break;
        }
    }
    return lcm;
}