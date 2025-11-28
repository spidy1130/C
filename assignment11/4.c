#include<stdio.h>
#include<stdlib.h>
int main()
{
  while(1)
  {
    int a,c,b,x;
    printf("\n1. check three numbers are lengths of an isosceles triangle or not\n");
    printf("2. checkthree numbers are lengths of sides of a right angled triangle or not\n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("4. Exit\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
      printf("enter three numbers;");
      scanf("%d %d %d",&a,&b,&c);
      if(a==b==c)
       printf("not isosceles triangle");
      if((a==b)||(b==c)||(a==c))
       printf("isosceles triangle");
      else
      printf("not isosceles triangle");
        break;
    case 2:
      printf("enter three numbers h,b,l respectveily;");
      scanf("%d %d %d",&a,&b,&c);
      if((a*a)==(b*b)+(c*c))
       printf("right angle triangle");
      else
       printf("not right angle triangle");
        break;
    case 3:
      printf("enter three numbers;");
      scanf("%d %d %d",&a,&b,&c);
      if(a==b==c)
       printf("equilateral triangle");
      else
       printf("not equilateral triangle");
        break;
    case 4:
      exit(0);
    
    default:
        printf("invalid entry;;");
        break;
    }
  }
  return 0;

}
