/*Define a function to input variable length string and store it
 in an array without memory wastage.*/
 #include<stdio.h>
 #include<stdlib.h>
 void fun();
 int main()
 {
    fun();
    //printf("%d",sizeof(main));
}
void fun()
{
    int n;
    printf("enter the length of string\n");
    scanf("%d",&n);
    fflush(stdin);
    char *p;
    p=(char*)calloc(n,sizeof(char));
    printf("enter your string");
    fgets(p,n,stdin);
    printf("%s",p);
    free(p);
}