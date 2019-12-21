/*     To implement a program having classes and objects    */

#include<iostream.h>
#include<conio.h>
#include<math.h>
class student
{
	 private:
	 int rno;
	 char name[20];
	 char cls[8];
	 int marks[5];
	 float percentage;
	 float calculate();
	 public:
	 void readmarks();
	 void displaymarks();
  };
  void student::readmarks()
  {
	 cout<<"ROLL NO.:";
	 cin>>rno;
	 cout<<"NAME:";
	 cin>>name;
	 cout<<"CLASS:";
	 cin>>cls;
	 cout<<"enter marks of five subjects:";
  for(int i=1;i<=5; i++)
	 cin>>marks[i];
  }
  void student::displaymarks()
  {
	 cout<<"ROLL NO.:"<<rno;
	 cout<<"NAME:"<<name<<endl;
	 cout<<"CLASS:"<<cls<<endl;
	 cout<<"marks are:";
  for(int i=1;i<=5;i++)
	 cout<<marks[i]<<endl;
	 percentage=calculate();
	 cout<<"percentage:"<<percentage;
  }
  float student::calculate()
  {
	 int s=0;
	 int marks[5];
	 float percentage;
  for(int i=0;i<=5;i++)
	 s=s+marks[i];
	 percentage=s/5;
	 return (percentage);
  };
  void main()
  {
	 clrscr();
	 student s;
	 s.readmarks();
	 s.displaymarks();
	 getch();
   }



















































OUTPUT:

ROLL NO.:9147597
NAME:KHUSHAL KAPUR
CLASS:12th
enter marks of five subjects:
45
47
50
49
50
ROLL NO.:-9147597
NAME:KHUSHAL KAPUR
CLASS:12th
marks are:
45
47
50
49
50
percentage:96









