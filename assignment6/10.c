#include<stdio.h>
int main()
{
    int m,n,p,l;
    float a,d;
    printf("enter cp and sp");
    scanf("%d %d",&m,&n);
   /* printf("enter sp");
    scanf("%d",&n);*/
    if(n==m)
      printf("no  loss, no profit");
    else if(n>m)
    {
        p= n-m;
        a=(p*100)/m;
        printf("profit percentage=%f",a);
    }
    else
    {
        l=m-n;
        d=(l*100)/m;
        printf("loss percentage=%f",d);
    }
 return 0;
      
}
