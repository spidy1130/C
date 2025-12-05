// Write a program that asks the user to enter a username. If the username entered is 
// one of the names in the list then the user is allowed to calculate the factorial of a 
// number. Otherwise, an error message is displayed
#include<stdio.h>
#include<string.h>
void fact();
int main()
{
    char list[5][20]={"naam_azad","spidy1130","spoilbrat","kaliya321","iamaman"};
    char username[20];
    printf("enter your username\n");
    gets(username);
    int i,l;
    for( i=0;i<5;i++)
    {
        l=strcmp(list[i],username);
        //printf("%d",l);
        if(l==0)
        {
         fact();
         break;
        }
    }
    if(i==5)
       printf("invalid username");
    return 0;
}
void fact()
{
    int i,f=1,n;
    printf("enter a no to find its factorial");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        f=i*f;
    }
    printf(" its factorial=%d",f);

}