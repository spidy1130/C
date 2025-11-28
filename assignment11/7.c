#include<stdio.h>
int main()
{
    float b,x;
    float a;
    printf("enter the electricity unit charges-:");
    scanf("%f",&x);
    switch (x<=50)
    {
    case 1:
        a=x;
        a=a*0.5;
        a=a+a*20/100;
        printf("\n%f rupees",a);
        break;
    case 0:switch (x<=150)
           {
                case 1:
                a=x-50;
                a=25+a*0.75;
                a=a+a*20/100;
                printf("\n%f rupees",a);
                break;
                case 0:switch (x<=250)
                {
                    case 1:
                     a=x-150;
                    a=100+a*1.20;
                    a=a+a*20/100;
                    printf("\n%f rupees",a);
                    break;
                    case 0:
                     a=x-250;
                     a=220+a*1.50;
                     a=a+a*20/100;
                    printf("\n%f rupees",a);
                    break;
                }break;
           }break;
    }
    return 0;
}