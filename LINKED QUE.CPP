#include<iostream.h>
#include<conio.h>
struct node
{
int info;
node * next;
};
node*front,*rear,*ptr;
node*insert(node*,int);
node*del(node*,int&);
void show(node*)
node*insert(node*rear,int num)
ptr=new node;
ptr->info=num;
ptr->next=null;
if(rear==null)
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

node*del(node*front,int&num)
{
if(front==null)
{
cout<<"empty queue";
num=-1;
}
ptr=front;
front=front->next;
num=ptr->info;
delete ptr;
return front
}                          
void show(node*front)
{
if(front==null)
{
cout<<"empty queue";
}
else
cout<<" \n the queue contains:";
for(ptr=front;ptr!=null;ptr=ptr->next)
cout<<ptr->info<<'\t';
}                         

void main()
{
clrscr();
rear=front=null;
int ch;
int num;
do{
cout<<"\n \t \t * MAIN MENU *"<<endl;
cout<<"\n \t \t 1. INSERT"<<endl;
cout<<"\n \t \t 2. DELETE"<<endl;
cout<<"\n \t \t 3. DISPLAY"<<endl;
cout<<"\n \t \t 4. EXIT"<<endl;
cout<<"ENTER YOUR CHOICE:";
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter the number to INSERT:";
cin>>num;
rear=insert(rear,num);
if(front==null)
front=rear;
break;

case 2:
front=del(front,num);
if(num!=-1)
cout<<"\n The deleted value is:"<<num;
if(front==null)
rear=front;
getch();
break;

case 3:
show(front);
getch();
break:
}

}while(ch!=4);
getch();
}
