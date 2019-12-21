/*                 TO IMPLEMENT INHERITENCE                          */


#include<iostream.h>
#include<conio.h>
#include<process.h>
class dolls
{
	char dcode[5];
protected:
	float price;
	void calcprice();
public:
	dolls()
	{
	cout<<"dolls";
	}
	void dinput();
	void dshow();
};
class softdolls:public dolls
{
	char sdname[20];
	float weight;
public:
	softdolls(){}
	void sdinput();
	void sdshow();
}s;
class electronicdolls : public dolls
{
	char edname[20];
	char batterytype[10];
	int batteries;
public:
	electronicdolls(){}
	void edinput();
	void edshow();
} f;
void dolls::dinput()
{
	cout<<"enter dolls code:";
	cin>>dcode;
	cout<<"enter price:";
	cin>>price;                                                         ;

}
void dolls::dshow()
{
	cout<<"DOLLS CODE:"<<dcode<<endl<<"PRICE:"<<price;
}
	void softdolls::sdinput()
{
	cout<<"enter SOFT DOLLS NAME:";
	cin>>sdname;
	cout<<"enter WEIGHT:";
	cin>>weight;
}
void softdolls::sdshow()
{
	cout<<"SOFT DOLLS NAME:"<<sdname<<endl;
	cout<<"WEIGHT:"<<weight;
}
void electronicdolls::edinput()
{
	cout<<"enter ELECTRONIC DOLLS NAME:";
	cin>>edname;
	cout<<"enter BATTERY TYPE:";
	cin>>batterytype;
	cout<<"enter NO. OF BATTERIES:";
	cin>>batteries;
}
void electronicdolls::edshow()
{
	cout<<"ELECTRONIC DOLLS NAME:";
	cout<<edname<<endl;
	cout<<"BATTERY TYPE:";
	cout<<batterytype<<endl;
	cout<<"NO. OF BATTERIES:";
	cout<<batteries;
}
void main()
{
	clrscr();
	f.dinput () ;
	f.dshow () ;
	s.sdinput () ;
	s.sdshow() ;
	f.edinput () ;
	f.edshow () ;
	getch();
}








































