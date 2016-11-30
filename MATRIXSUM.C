#include<stdio.h>
#include<conio.h>

int main()
{
 int a[2][2],b[2][2],c[2][2],i,j,suM=0;
 clrscr();
 printf("Enter the values for Matrix A : \n");
 for(i=1;i<=2;i++)
 {
  for(j=1;j<=2;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Matrix A is : ");
 for(i=1;i<=2;i++)
 {
  printf("\n");
  for(j=1;j<=2;j++)
  {
   printf("%d\t",a[i][j]);
  }
   printf("\n");
 }
 printf(" \n Enter the values for Matrix B : \n ");
 for(i=1;i<=2;i++)
 {
  for(j=1;j<=2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf(" Matrix B is : ");
 for(i=1;i<=2;i++)
 {
  printf("\n");
  for(j=1;j<=2;j++)
  {
   printf("%d\t",b[i][j]);
  }
  printf("\n");
 }
 for(i=1;i<=2;i++)
 {
  for(j=1;j<=2;j++)
  {
   suM = a[i][j] + b[i][j];
   c[i][j] = sub;
  }
 }
 printf(" \n The difference of Matrix A and Matrix B is : \n");
 for(i=1;i<=2;i++)
 {
  printf("\n");
  for(j=1;j<=2;j++)
  {
   printf("%d\t",c[i][j]);
  }
  printf("\n");
 }
  getch();
  return 0;
}
