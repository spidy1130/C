#include<stdio.h>
int dig(int);
int main()
{
    int a;
    printf("enter a no");
    scanf("%d",&a);
    if(dig(a)==1)
    {
        printf("digit is present");
    }
    else  
       printf("not present");
    return 0;
}
int dig(int a)
{
    int c=0,t,n;
    printf("\nenter the digit to find in no;");
    scanf("%d",&n);
    while(a)
    {
        t=a%10;
        if(t==n)
        {
            c++;
            break;
        }
        a=a/10;
    }
    return c;
}