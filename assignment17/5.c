#include<stdio.h>
int sort(int *);
int main()
{
    int i,a[5];
    printf("enter 5 value");
    for(i=0;i<5;i++)
      scanf("%d",&a[i]);
    i=sort(a);
    if(i!=-1)
    {
      printf("%d is first no occurs twice:",i);
    }
    return 0;
}
int sort(int a[])
{
  int i,c=0;
  for(i=0;i<5;i++){
    if(a[i]==a[i+1])
    {
      c++;
      return a[i];
    }
  }
  if(c==0){
     printf("no adjacent duplicate values found");
     return -1;
  }

}