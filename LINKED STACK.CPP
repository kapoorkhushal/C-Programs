\*                        LINKED STACK                                *\


#include<iostream.h>
#include<conio.h>
struct node
{
	int info;
	node *next;
};
	node*top,*ptr;
	node*push(node*,int);
	node*pop(node*,int&);	
	void show(node*);
	node*push(node*top,int num)
	{
		ptr=new node;
		if(top==NULL)
		{
			top=ptr;	
			ptr->info=num;
			ptr->next=NULL;
		}
		else
		{
			ptr->info=num;
			ptr->next=top;
			top=ptr;
		}
			return top;
	}
	node*pop(node*top,int &num)
		{
			if(top==NULL)
			{
				cout<<"empty stack";
				num=-1;
			}
			else
			{
				ptr=top;
				top=top->next;
				num=ptr->info;
				delete ptr;
			}
				return top;
		}
 void show(node*top)
 {
	if(top==NULL)
	cout<<"empty stack";
	else
	{
		for(ptr=top;ptr!=NULL;ptr=ptr->next)
		cout<<ptr->info<<"\t";
	}
 }
 void main()
 {
	clrscr();
	int ch,num;
	top=NULL;
	do
	{
		cout<<'\n'<<" MAIN MENU ";
		cout<<'\n'<< "1. PUSH";
		cout<<'\n'<< "2. POP";
		cout<<'\n'<<"3. DISPLAY";
		cout<<'\n'<< "4. EXIT";
		cout<<'\n'<< "enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"enter the no to be inserted:";
			cin>>num;
			top=push(top,num);
			break;
			case 2: top= pop(top,num);
			if(num!=-1)
			cout<<"the deleted value is:"<<num;
			break;
			case 3: show(top);
			break;
		}
	}while(ch!=4);
	getch();
 }



