#include<stdio.h>
void main()
{
    int a,b;
    int *ptra,*ptrb;
    printf("Enter two values :");
    scanf("%d%d",a,b);
    ptra=&a;
    ptrb=&b;
    printf("Addition :%d\n",*ptra+*ptrb);
    printf("Substraction :%d\n",*ptra-*ptrb);
}