#include<stdio.h>
void main()
{
    int mynum[4]={10,20,30,40};
    int* ptr,i;
    ptr=&mynum[0];
    printf("Value :%d\n",*ptr);
    for(i=0;i<4;i++)
    {
    printf("Value   :%d\n",*(ptr+i));
    printf("Address :%p\n",*(ptr+i));
    }
}