#include<stdio.h>
int dico(int);
int main()
{
    int n,c=0;
    printf("enter a no:");
    scanf("%d",&n);
    printf("%d",dico(n));
    return 0;
}
int dico(int n)
{
    if (n >= 0 && n <= 9)
    {
        return 1;
    } 
   else {
        return 1 + dico(n / 10);
    }
    
}