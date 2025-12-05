/*Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,c=0;
    char b[20]={0};
    char a[10][20]={"gaya","cherki","patna","jahanabad","pandora","newyork","jamalpur","pune","california","mumbaii"};
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
           if(strcmp(a[i],a[j])>0)
           {
              strcpy(b,a[i]);
              strcpy(a[i],a[j]);
              strcpy(a[j],b);
           }
        }
    }
    for(i=0;i<10;i++)
     printf("%s\n",a[i]);
    return 0;
}