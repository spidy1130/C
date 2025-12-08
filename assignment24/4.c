#include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    //printf("%d",sizeof(main));
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
    return 0;
}