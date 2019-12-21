#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char a[100];
int i,j;
cout<<"Enter a STRING :";
gets(a);
cout<<"The reverse of the given STRING is :";
for(i=0;a[i]!='\0';i++);
for(j=i;j>=0;j--)
cout<<a[j];
getch();
}