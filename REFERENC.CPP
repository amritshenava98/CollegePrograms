#include<iostream.h>
#include<conio.h>

int main()
{
 int i; //decalaring the simple variable
 int &r=i; //declaring the reference variable

 float j; //declaring a simple floating point variable
 float &s=j; //declaring the reference variable for the floating point variable

 char n; //declaring a simple character variable
 char &t=n; //declaring the refrence variable for the character variable

 char a[20];
 char &b=a[20];

 int x[2];
 int &y=x[2];

 clrscr();

 i=5;
 j=28.5;
 n='a';
 a[20]='co';
 x[10]=1,2,3;

 cout<<"Value of i :"<<i<<endl;
 cout<<"Value of i reference:"<<r<<endl;
 cout<<" Addess of i  and r is "<<&i<<"\t"<<&r<<endl;

 cout<<" Value of j :"<<j<<endl;
 cout<<" Value of j reference : "<<s<<endl;
 cout<<" Address ofj and s is "<<&j<<"\t"<<&s<<endl;

 cout<<" Value of n :"<<n<<endl;
 cout<<" Value of n reference : "<<t<<endl;
 cout<<" Address of n and t is "<<(void *)&n<<"\t"<<(void *)&t<<endl;

 cout<<" Value of a :"<<a<<endl;
 cout<<" Value of a reference :"<<b<<endl;
 cout<<" Address of a and b is "<<(void *)&a<<"\t"<<(void *)&b<<endl;

 cout<<" Value of x :"<<x<<endl;
 cout<<" Value of x reference :"<<y<<endl;
 cout<<" Address of x and z is "<<&x<<"\t"<<&y<<endl;
 getch();
 return 0;
}