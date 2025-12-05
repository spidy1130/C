/*Write a program to print the strings which are palindrome in the list of strings.*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i,c;
    char b[20];
    char a[5][20]={"gaya","kanak","patna","hanah","pandora"};
    for(i=0;i<5;i++)
    {
       strcpy(b,a[i]);
       strrev(b);
       c=strcmp(b,a[i]);
       if(c==0)
         printf("%s is palindrome\n",a[i]);
    }

    return 0;
}