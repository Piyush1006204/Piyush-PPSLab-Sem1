#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
int matrix1[3][3];
int matrix2[3][3];
int matrix3[3][3];
printf("Enter values for 1st Matrix:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&matrix1[i][j]);
}
}
printf("Enter values for 2nd Matrix:\n");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
scanf("%d",&matrix2[i][j]);
}
}
printf("Addition of two Matrices :");
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
matrix3[i][j]=matrix1[i][j]=matrix2[i][j];
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
printf("%d\n",matrix3[i][j]);
}
printf("\n");
}
}
