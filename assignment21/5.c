#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,c=0;
    char  a[5][20]={"a1@gmail.com","sbjkscbsj","abab@xkl","gasjkdfgk","priya@gmail.com"};
    // for(i=0;i<5;i++)
    // {
    //     for(j=0;a[i][j];j++)
    //     {
          
    //           if(a[i][j]=='@')
    //            {
    //               c++;
    //               break;
    //            }
           
    //     }
    //   if(c==0)
    //     printf("%s",a[i]);
    // }
     for(i=0;i<5;i++)
    {
       if(strchr(a[i],'@') == 0)
        printf("%s\n",a[i]);
    }
    return 0;
}