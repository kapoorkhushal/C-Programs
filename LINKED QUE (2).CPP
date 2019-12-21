
/*                         TO IMPLEMENT LINKED QUEUE                   */


 #include<iostream.h>
 #include<conio.h>
  struct node
 {
	int info;
	node*next;
 };
 node*front,*rear,*ptr;
 node*insert(node*,int);
 node*del(node*,int&);
 void show(node*);
 node*insert(node*rear,int num)
 {
	ptr=new node;
	ptr->info=num;
	ptr->next=NULL;
	if(rear==NULL)
	{
		rear=ptr;
		front=ptr;
	}
	else
		{
		rear->next=ptr;
		rear=ptr;
		}
	return(rear);
 }
 node*del(node*front,int &num)
 {
	if(front==NULL)
	{
		cout<<"Empty queue";
		num=-1;
	}
	ptr=front;
	front=front->next;
	num=ptr->info;
	delete ptr;
	return front;
 }
 void show(node*front)
 {
	if(front==NULL)
	{
		cout<<"Empty queue";
	}
	else
		cout<<"\n The queue contains:";
		for(ptr=front;ptr!=NULL;ptr=ptr->next)
		cout<<ptr->info<<'\t';
	}
 void main()
 {
	clrscr();
	rear=front=NULL;
	int ch;
	int num;
	do
	{
		cout<<"\n\t\t MAIN MENU";
		cout<<"\n\t\t **********";
		cout<<"\n\t\t 1.INSERT";
		cout<<"\n\t\t 2.DELETE";
		cout<<"\n\t\t 3.DISPLAY";
		cout<<"\n\t\t 4.EXIT";
		cout<<"enter your choice";
		cin>>ch;
	switch(ch)
	{
		
case 1: cout<<"Enter the number to insert";
		cin>>num;
		rear=insert(rear,num);
		if(front==NULL)
		front=rear;
		break;
	
case 2: front=del(front,num);
		if(num!=-1)
		cout<<"\n The deleted value is"<<num;
		if(front==NULL)
		rear=front;
		getch();
		break;
		
case 3: show(front);
		getch();
		break;
	}
 }
 while(ch!=4);
 getch();
 }
