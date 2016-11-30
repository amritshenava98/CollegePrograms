#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
 char firstname[10], lastname[10];
 clrscr();
 printf("Enter your first name : ");
 scanf("%s",&firstname);
 printf("\nEnter your lastname : ");
 scanf("%s",&lastname);
 strcat(firstname,lastname);
 printf("\nYour username is %s",firstname);
 getch();
 return 0;
}
