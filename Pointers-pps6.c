#include<stdio.h>
void main()
{
    int a,b,sum,diff;
    int *ptra,*ptrb,*ptrsum,*ptrdiff;
    printf("Enter two values :");
    scanf("%d%d",a,b);
    ptra=&a;
    ptrb=&b;
    ptrsum=&sum;
    ptrdiff=&diff;
    printf("Addition :%d\n",*ptrsum);
    printf("Substraction :%d\n",*ptrdiff);
}