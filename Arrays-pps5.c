#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int i,j,k;
int matrix1[3][3];
int matrix2[3][3];
int result[3][3];
printf("Enter values for 1st Matrix:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",matrix1[i][j]);
}
}
printf("Enter values for 2nd Matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",matrix2[i][j]);
}
}
printf("First Matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\n",matrix1[i][j]);
}
printf("\n");
}
printf("Second Matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\n",matrix2);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
result[i][j]=0;
}
}
printf("Product of this two Matrices :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<3;k++)
{
result[i][j]+=matrix1[i][k]*matrix2[k][j];
}}}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\n",result[i][j]);
}
printf("\n");
}}