#include<stdio.h>
void main()
{
    int a;
    printf("Enter the year");
    scanf("%d",&a);
    if(a%4==0&&a%100!=0)
    {
        if(a%400==0)
        {
            printf("%d is not a leap year",a);
        }
        else 
        {
            printf("%d is a leap year",a);
        }
     }
    else
    {
        printf("%d is not a leap year",a);
    }
}