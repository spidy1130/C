#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],temp;
    int i,j;
    printf("enter your string\n");
    fgets(a,20,stdin);
    for(i=0;a[i];i++)
    {
        for(j=i+1;a[j];j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%s",a);
    return 0;
}