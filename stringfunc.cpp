#include<iostream.h>
#include<string.h>
#include<conio.h>

void main()
{
 char fname[10],lname[10];
 int fnamelen,lnamelen;
 clrscr();
 cout<<"\n Enter your first name : ";
 cin>>fname;
 cout<<"\n Enter your last name : ";
 cin>>lname;
 fnamelen=strlen(fname);
 lnamelen=strlen(lname);
 cout<<"\n The length of your first name is "<<fnamelen<<"\n";
 cout<<"\n The length of your last name is "<<lnamelen<<"\n";
 cout<<"\n Your full name is "<<strcat(fname,lname)<<"\n";
 cout<<"\n Using string copy function : "<<strcpy(fname,lname)<<"\n";

 getch();
}
