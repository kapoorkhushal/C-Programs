#include<iostream.h>
#include<conio.h>
void main()
{
int n,reverse=0;
cout<<"Enter an integer : ";
cin>>n;
while(n!=0)
{
int remainder=n%10;
reverse=reverse*10+remainder;
n=n/10;
}
cout<<"REVERSED NUMBER : "<<reverse;
getch();
}