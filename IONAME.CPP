#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{

	clrscr();
	char a[100];
	int i;
	cout<<"Enter a NAME :";
	gets(a);
	cout<<"The name you have entered is :";
	for(i=0;a[i]!='\0';i++)
	cout<<a[i];
	getch();
}