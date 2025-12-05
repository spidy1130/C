/*Write a program to search a string in the list of strings.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char b[20];
    char a[10][20]={"gaya","cherki","patna","jahanabad","pandora","newyork","jamalpur","pune","california","mumbaii"};
    printf("enter string to find");
      gets(b);
    for(i=0;i<10;i++)
    {
       if(strcmp(a[i],b)==0)
       {
          c++;
          break;
       }
    }
    if(c==1)
     printf("string is found");
    else
     printf("string is not found");
    return 0;
}