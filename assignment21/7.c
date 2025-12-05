/*From the list of IP addresses, 
check whether all ip addresses are valid.*/
#include<stdio.h>
#include<string.h>
int main()
{
    char ip[]="122.54.95.87.54";
    char *a=strtok(ip,".");
    int count=0;
    while(a != NULL)
    {
        int x=atoi(a);
        if((x>=0)&&(x<=255))
        count++;
        else
         {
            printf("invalid IP");
            break;
         }
         a=strtok(NULL,".");     
    }
     if(count>=5)
         {
            printf("invalid IP");
         }
         else
          printf("valid IP");
    return 0;
}