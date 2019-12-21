#include<iostream.h>
#include<conio.h>
void main()
{
int n,num,digit,rev=0;
cout<<"Enter a POSITIVE NUMBER : ";
cin>>num;
while(num!=0)
{
digit=num%10;
rev=(rev*10)+digit;
num=num/10;
}
cout<<"The reverse of the given number is : "<<rev<<endl;
if(n==rev)
cout<<"The given number is A PALINDROME ";

else
cout<<"The given number is NOT A PALINDROME ";
getch();
}