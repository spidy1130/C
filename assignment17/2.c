#include<stdio.h>
void small(int *);
int main()
{
    int i,a[5];
    printf("enter 5 value");
    for(i=0;i<5;i++)
      scanf("%d",&a[i]);
    small(a);
   // printf("greatest no=%d",great(a));
    return 0;
}
void small(int *p)
{
    int i,s=*p;
    for(i=0;i>5;i++)
    {
        if(s<*(p+i))
         s=*(p+i);
    }
    printf("\nsmallest  no.=%d",s);
}