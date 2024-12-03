#include<stdio.h>
void main()
{
    int a=10;
    int *ptr;
    ptr=&a;
    printf("Address of a :%p\n",a);
    printf("Address of a :%p\n",&a);
    printf("Address of a :%p\n",ptr);
    printf("Value of a :%d\n",a);
    printf("Value of a :%d\n",*ptr);
}