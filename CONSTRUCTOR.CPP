		/* TO CALCULATE THE FARE OF A TAXI */


#include<iostream.h>
#include<conio.h>
class cab
{
private:
	int cno;
	char type;				//cab no
	float pkm;                              //price per km
	float dist;				//distance
public:

void charges()
{
	if(type=='a')
{
	pkm=25;
	cno=1010;
}
	else if(type=='b')
{
	pkm=20;
	cno=9090;
}
	else if(type=='c')
{
	pkm=15;
	cno=5455;
}
}
cab()                                     //parameterised constructor
{
	clrscr();
	cout<<"enter type:";
	cin>>type;
	cout<<"enter distance:";
	cin>>dist;
	charges();
	cout<<"cab no.="<<cno<<endl;
	cout<<"type="<<type<<endl;
	cout<<"price per kilometer="<<pkm<<endl;
	cout<<"total amount="<<dist*pkm;
}
};

void main()
{
	cab();
	getch();
}




















