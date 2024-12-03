#include<stdio.h>
void main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("Address of a :%x\n",a);
    printf("Address of a :%x\n",&a);
    printf("Address of a :%x\n",ptr);
    printf("Value of a :%d\n",a);
    printf("Value of a :%d\n",*ptr);
    a=20;
    printf("Value of a :%d\n",a);
    *ptr=4928;
    printf("Address of a :%x\n",&a);
    printf("Address of a :%x\n",ptr);
    printf("Value of a :%d\n",a);
    printf("Value of a :%d\n",*ptr);
    printf("Value of a :%d\n",*(&a));
}