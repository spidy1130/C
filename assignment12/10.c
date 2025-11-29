#include<stdio.h>
void prmfac(int);
int main()
{
    int a;
    printf("eneter a no. to know its prime factor");
    scanf("%d",&a);
    prmfac(a);
    return 0;
}
void prmfac(int a)
{
    int i=2,n;
    while(a!=1)
    {
        n=a%i;
        if(n==0)
        {
          a=a/i;
          printf("%d,",i);
          continue;
        }
        else
          i++;         
    }


}