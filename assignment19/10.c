#include<stdio.h>
#include<string.h>
int main()
{
    int c=1,i,j;
    char a[20],str[20];
    printf("enter your string");
    fgets(a,20,stdin);
    strcpy(str,a);
    for(i=0;str[i];i++)
    {
        c=1;
        for(j=i+1;str[j];j++)
        {
            if(str[i]==str[j])
            {
                c++;
                str[j]=32;
            }
        }
        if(str[i] !=32)
          printf("%c has occured %d times\n",str[i],c);
    }
    return 0;
}