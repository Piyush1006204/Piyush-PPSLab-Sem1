#include<stdio.h>
void main()
{
    int mynum[4]={10,20,30,40};
    printf("Address :%p\n",&mynum);
    printf("Address :%p\n",&mynum[0]);
    printf("Address :%p\n",&mynum[1]);
    printf("Address :%p\n",&mynum[2]);
    printf("Address :%p\n",&mynum[3]);
    printf("Value :%d\n",mynum);
    printf("Value :%d\n",mynum[0]);
    printf("Value :%d\n",mynum[1]);
    printf("Value :%d\n",mynum[2]);
    printf("Value :%d\n",mynum[3]);
}