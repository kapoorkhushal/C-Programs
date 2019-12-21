#include<iostream.h>
#include<conio.h>
#include<math.h>
int binary_decimal(int n);
int decimal_binary(int n);
void main()
{
clrscr();
double n;
char c;
cout<<"1. Enter alphabet 'd' to convert BINARY to DECIMAL "<<endl;
cout<<"1. Enter alphabet 'b' to convert DECIMAL to BINARY "<<endl;
cout<<"Enter your choice :";
cin>>c;
if(c=='d'||c=='D')
{
cout<<"Enter a binary number : ";
cin>>n;
cout<<"Decimal equivalent = "<<binary_decimal(n);
}
else if(c=='b'||c=='B')
{
cout<<"Enter a decimal number : ";
cin>>n;
cout<<"Binary equivalent = "<<decimal_binary(n);
}
else
cout<<"WRONG INPUT ! ";
getch();
}
int decimal_binary(int n)
{
double rem,i=1,binary=0;
while(n!=0)
{
rem=n%2;
n=n/2;
binary=binary+(rem*i);
i=i*10;
}
return binary;
}

int binary_decimal(int n)
{
double rem,i=0,decimal=0;
while(n!=0)
{
rem=n%10;
n=n/10;
decimal=decimal+(rem*pow(2,i));
i++;
}
return decimal;
}