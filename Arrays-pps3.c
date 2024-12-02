#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
int matrix[3][3];
printf("Enter values for the matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&matrix[i][j]);
}}
printf("Matrix :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",matrix[i][j]);
}
printf("\n");
}
printf("Transpose of the matrix :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",matrix[j][i]);
}
printf("\n");
}}
