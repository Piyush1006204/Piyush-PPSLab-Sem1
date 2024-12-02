#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num[5];
int i,j;
j=num[0];
for(i=0;i<=4;i++)
{
printf("Enter numbers:");
scanf("%d",&num[i]);
}
j=num[0];
for(i=0;i<=4;i++)
{
if(num[i]>j)
{
j=num[i];
}
}
printf("Maximum Number is :%d",j);
}