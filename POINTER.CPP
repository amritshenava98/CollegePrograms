#include<iostream.h>
#include<conio.h>

void main ()
{
   int  var=20;
   int  *ip;
   int  **dip;
   ip = &var;
   dip = &ip;
   clrscr();

   int var20[5]={1,2,3,4,5};
   int *var21[5];
   var21[0]=&var20[0];
   var21[1]=&var20[1];
   var21[2]=&var20[2];
   var21[3]=&var20[3];
   var21[4]=&var20[4];

   cout << "Value of var variable: ";
   cout << var << endl;


   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   cout << "Address stored in dip variable: ";
   cout << dip << endl;


   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   cout << "Value of **dip variableL: ";
   cout << **dip << endl;

   cout << "Value of *var21[4] variable: ";
   cout << *var21[4] << endl;

   getch();
}