/*                         STACK AS AN ARRAY                  */


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
const int size=10;
void push(int stack[],int &top,int size,int num)

   {
	if (top>size)
	cout<<"stack is FULL";
	else
	{
		top++;
		stack[top]=num;
	}
   }
   int pop(int stack[],int &top)
   {
	if (top<0)
	{
		cout<<"  empty stack";
		return(-1);
	}
	 else
	{

   int val=stack[top];
	top--;
	return(val);
	}
   }
   void show(int stack[],int top)
   {
	if (top<0)
	{
		cout<<"\n empty stack";
	}
	else
	{
		cout<<"The stack contains:";
		for(int i=top;i>=0;i--)
		cout<<stack[i]<<'\t';
	}
   }
   void main()
   {
	clrscr();
	int stack[size];
	int top=-1;
	int ch,num;
	do
	{
		cout<<"\n \t * MAIN MENU * ";
		cout<<"\n \t 1. push ";
		cout<<"\n \t 2. pop ";
		cout<<"\n \t 3. display ";
		cout<<"\n \t 4. exit ";
		cout<<" \n \t enter your choice:";
		cin>>ch;
		switch(ch)
		{

			case 1: cout<<" enter no to insert";
			cin>>num;
			push(stack,top,num,size);
			break;
			case 2: num=pop(stack,top);
			if (num!=-1)
			cout<<"the popped value is:"<<num;
			getch();
			break;
			case 3: show(stack,top);
			getch();
			break;
		}
	}while(ch!=4);
 }






