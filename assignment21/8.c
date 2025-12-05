// Given a list of words followed by two words, the task is to find the minimum distance 
// between the given two words in the list of words.
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
    char words[5][20]={"you","are","my","real","friend"};
    char word1[20],word2[20];
    printf("enter first word");
    gets(word1);
    fflush(stdin);
    printf("enter second word");
    gets(word2);
    int i, w1=-1,w2=-1,l;
    for(i=0;i<5;i++)
    {
        if(strcmp(words[i],word1)==0)
         w1=i;
        if(strcmp(words[i],word2)==0)
         w2=i;

    }
    if((w1==-1)||(w2==-1))
     printf("given words not present in list");
    else
    {
        l=abs(w2 - w1);
        printf("lenght btw words = %d",l-1);
    }
    return 0;
}