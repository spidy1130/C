//Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[20];
    int al=0,di=0,s=0,i,sp=0;
    printf("enter your string\n");
    fgets(a,20,stdin);
    for(i=0;a[i];i++)
    {
        if(isalpha(a[i]))
          al++;
        else if(isdigit(a[i]))
          di++;
        else if(isspace(a[i]))
          s++;
        else
         sp++;
    }
    printf("\nno of alphabet is %d",al);
    printf("\nno of digit is %d",di);
    printf("\nno of special character is %d",sp);
    printf("\nno of words is %d",(s));

    return 0;
}