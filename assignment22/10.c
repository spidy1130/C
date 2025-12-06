#include<stdio.h>
#include<string.h>
void revrse(char *);
int main()
{
    char a[]="knowledge";
    revrse(a);
    return 0;

}
void revrse(char *p)
{
    printf("%s",strrev(p));
}