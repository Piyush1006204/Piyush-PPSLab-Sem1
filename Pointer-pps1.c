#include<stdio.h>
void main()
{
    int a=10,b=20,sum=0;
    int *ptra,*ptrb,*ptrsum;
    ptra=&a;
    ptrb=&b;
    ptrsum=&sum;
    sum=a+b;
    printf("%d\n",*ptra);
    printf("%d\n",*ptrb);
    printf("%d\n",*ptrsum);
}