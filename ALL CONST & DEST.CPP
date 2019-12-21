 /*             PROGRAM HAVING ALL CONSTRUCTORS & DESTRUCTOR           */

#include<iostream.h>
#include<conio.h>

class square
{
	private:
	int l;
	public:
	square()                     //default constructor
{
	l=10;
}
/*      square(int i=5)              //default value argument
{
	l=i;
}*/
	square(int a)                //parameterised constructor
{
	l=a;
}
	square(square&a)             //copy constructor
{
	l=a.l;
}
void display()
{
	cout<<l<<' ';
}
	~square()
{
	cout<<"destructor is invoked";
}
};
void main()
{
	clrscr();
	square a,b(10),c(b);
	a.display();
	b.display();
	c.display();
	getch();
}



OUTPUT:
10 10 10























