#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("Value of a :%d",*ptr);
}