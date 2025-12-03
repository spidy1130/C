#include<stdio.h>
#include<windows.h>
#include<conio.h>
void great(int *);
int main()
{
    system("cls");
    int i,a[5];
    printf("enter 5 value");
    for(i=0;i<5;i++)
      scanf("%d",&a[i]);
    great(a);
   // printf("greatest no=%d",great(a));
    getch();
    return 0;
}
void great(int *p)
{
    int i,s=*p;
    for(i=0;i<5;i++)
    {
        if(s<*(p+i))
         s=*(p+i);
    }
    printf("\ngreatest no.=%d",s);
}