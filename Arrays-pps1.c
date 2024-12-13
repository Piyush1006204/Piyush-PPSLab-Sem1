 #include<stdio.h>
 void main()
 {
 int num[10];
 int i;
 int j=0;
 for(i=0;i<=9;i++)
 {
 printf("Enter Number:");
 scanf("%d",&num[i]);
 j=j+num[i];
 }
 printf("Sum=%d",j);
 }