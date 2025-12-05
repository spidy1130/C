// Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[5][2][20]={{"ram","123a"},{"naam_azad","cherki1234"},{"spidy1130","azad1234"},{"elon_mu","jaimatadi"},{"lizz9852","lovey143"}};
    char username[20],pasword[20];
    printf("enter username\t");
    gets(username);
    fflush(stdin);
    printf("enter password\t");
    gets(pasword);
    int f=0;
    for(int i=0;i<5;i++)
    {
        if(strcmp(username,a[i][0])==0 && strcmp(pasword,a[i][1])==0)
        {
            printf("login successful");
            f=1;
        }
    }
    if(f==0)
    printf("username and password not matched");
    return 0;
}