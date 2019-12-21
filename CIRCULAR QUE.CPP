 #include<iostream.h>
 #include<conio.h>
 const int size=10;
 int Q[size];
 void add(int Q[],int front,int&rear,int num)
 {
	if((rear+1)%size==front)
	cout<<"QUE is Full";
	else
	{
		rear=(rear+1)%size;
		Q[rear]=num;
	}
 }
 int del(int Q[],int & front,int rear)
 {
	if(front==rear)
	{
		cout<<"Empty QUE";
		return(-1);
	}
	else
	{
		front++;
		int num=Q[front];
		return(num);
	}
 }
 void show(int Q[],int front,int rear)
 {
	int i=front;
	if(front==rear)
	cout<<"Empty Que";
	cout<<"The QUE contains:";
	while(i!=rear)
	{
		i=(i+1)%size;
		cout<<Q[i]<<'\t';
	}
 }
 void main()
 {
	clrscr();
	int ch,front,rear,num;
	front=rear=0;
	do
	{
		cout<<"\n \t * MAIN MENU *";
		cout<<"\n \t 1. INSERT";
		cout<<"\n \t 2. DELETE";
		cout<<"\n \t 3. SHOW";
		cout<<"\n \t 4. EXIT";
		cout<<" \n \t ENTER YOUR CHOICE:";
		cin>>ch;
		switch(ch)
	{
		case 1:cout<<" \n Enter the number to be inserted:";
		cin>>num;
		add(Q,front,rear,num);
		break;

		case 2:num=del(Q,front,rear);
		if(num!=-1)
		cout<<"The deleted value is: "<<num;
		getch();
		break;

		case 3:show(Q,front,rear);
		getch();
		break;
	}
	}while(ch!=4);
 }
