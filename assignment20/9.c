#include<stdio.h>
#include<string.h>
int wcount(char b[]);
void opp(char a[]);
int main()
{
    char a[]="aman is a great father.";
    // printf("enter your string");
    // fgets(a,20,stdin);
    a[strlen(a)-1]='\0';
    opp(a);
    return 0;
}
void opp(char a[])
{
    int i,j=strlen(a),k;
   // for(i=0;i<wcount(a);i++)
  //  {
        for(j;j>=0;j--)
        {
          int c=0;
            if((a[j]==32)&&(a[j+1]!=32))
            {
              for(k=j;k!=32;k++)
              {
                 printf("%c",a[k]);
              }
            }
        }
   // }

}
int wcount(char b[])
{
    int a=0,i;
    for(i=0;b[i];i++)
    {
        if((i==0)&&(b[i]!=32))
         a=1;
        if((b[i]!=32)&&(b[i-1]==32))
         a++;
    }
  return a;
}