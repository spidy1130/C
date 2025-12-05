#include<stdio.h>
int main()
{
    int i,j=0,c=0;
    char b[]={'a','e','i','o','u'};
    char a[5][20]={"gaya","cherki","patnai","jahanabad","pandora"};
     for(i=0;i<5;i++)
     {
        c=0;
        for(j=0;a[i][j];j++)
        {
            for(int k=0;k<5;k++)
            {
              if(a[i][j]==b[k])
              c++;
            }  
        }
        printf("%d string has %d vowel\n",i+1,c);
    }
    return 0;
}