#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char a[100],ans;
int i,ch;
cout<<"Enter a STRING :";
gets(a);
for( i=0;a[i]!='\0';i++);
cout<<"Do you want to modify the given string (y/n) :";
cin>>ans;
if(ans=='n')
{
cout<<"The string you have entered is :";
puts(a);
}
else
{
cout<<"1. Replace a character by another character"<<endl;
cout<<"2. Delete a character"<<endl;
cout<<"3. Insert a character "<<endl;
cout<<"Enter your choice :";
cin>>ch;
switch(ch)
{
case 1: int z;
	char b,m;
	cout<<"Enter character which you want to repalce :";
	cin>>m;
	cout<<"Enter character which you want to replace with :";
	cin>>b;
	for(z=0;a[z]!='\0';z++)
	{
	if(a[z]==m)
	a[z]=b;
	}
	cout<<"The modified STRING is : ";
	puts(a);
	break;

case 2: int d,k;
	char g,o;
	cout<<"Enter character which you want to delete :";
	cin>>g;
	for(d=0;a[d]!='\0';d++)
	{
		if(a[d]==g)
	for(k=d;k<=i;k++)
	{
		o=a[k+1];
		a[k+1]=a[k];
		a[k]=o;
	}
	}
	cout<<"The modified STRING is : ";
	puts(a);
	break;

case 3:int x,v;
	char u;
	cout<<"Enter location where you want to insert :";
	cin>>x;
	cout<<"Enter character which you want to insert :";
	cin>>u;
	for(v=i+1;v>=x;v--)
	{
	a[v]=a[v-1];
	}
	a[x-1]=u;
	cout<<"The modified STRING is : ";
	puts(a);
}
}
getch();
}