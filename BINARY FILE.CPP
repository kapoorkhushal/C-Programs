/*                          BINARY FILE                      */


#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>

class stock
{
	int ITNO;
	char ITEM[25];
	public:
		void getit()
		{
			cout<<"Enter item number:";
			cin>>ITNO;
			cout<<"Enter item:";
			cin>>ITEM;
		}
		void showit()
		{
			cout<<"Item number:";
			cout<<ITNO<<endl;
			cout<<"Item:";
			cout<<ITEM<<endl;
		}
};
void writedata()
{
	stock S;
	char ch;
	fstream f("C:\\STOCK.dat",ios::out);
	while(1)
	{
	S.getit();
	f.write((char*)&S,sizeof(S));
	cout<<"DO YOU WANT TO CONTINUE:";
	cin>>ch;
	if(ch=='n'||ch=='N')
	break;
	}
	f.close();
	}
void readdata()
{
	stock S;
	fstream f("C:\\STOCK.dat",ios::in);
	if(!f)
	{
		cout<<"UNABLE TO READ FROM THE FILE"<<endl;
		return;
	}
	while(f.read((char*)&S,sizeof(S)))
	{                                         //f.read((char*)&S,sizeof(S));
		S.showit();
	}
	f.close();
}
void main()
{
	clrscr();
	writedata();
	readdata();
	getch();
}




OUTPUT:

Enter item number: 5
Enter item: APPLE
DO YOU WANT TO CONTINUE: y
Enter item number: 7
Enter item: Mango
DO YOU WANT TO CONTINUE: n
Item number: 5
Item: APPLE
Item number: 7
Item: Mango















