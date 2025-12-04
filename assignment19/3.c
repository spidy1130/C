#include<stdio.h>
int main()
{
    char a[20],b[6]={'a','i','o','u','e'};
    int i,j,c=0;
    printf("enter your string\n");
    fgets(a,20,stdin);
    strlwr(a);
    for (i=0;a[i];i++)
    {
        for(j=0;b[j];j++)
        {
          if(a[i]==b[j])
            c++;
        }   
    }
    printf("vowel has occured %d times",c);
    return 0;
}