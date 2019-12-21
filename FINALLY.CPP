#include<iostream.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<fstream.h>
void load();
void pass(int );
void chpass();
class info
{
char name[50], address[100] ,b[5],phone[10];
long int str,tfees,pfees,lfees, inst_dn,s[5],x,inst_amt,std;
long double reg_no;
public:
info()
{
strcpy(name,"         ");
strcpy(address,"        ");
tfees=pfees=lfees=0;
inst_dn=0;
tfees=0;
std=0;
inst_amt=0;
}
void constr();
void input_stud_new(int&);
void update_stud();
void display();
void display2();
int ret();
int srch_name(char v[]);
};
void info::constr()
{
strcpy(name,"         ");
strcpy(address,"             ");
tfees=pfees=lfees=0;
inst_dn=0;
tfees=0;
std=0;
inst_amt;
}
void info::input_stud_new(int&m)                    // New entry
{
m++;  x=0;
reg_no=m;
cout<<"enter name: ";
gets(name);
cout<<endl<<"standard (11 or 12): ";
cin>>std;
cout<<endl<<"address: ";
gets(address);
cout<<endl<<"phone no : +91";
gets(phone);
cout<<endl<<"stream : ";
cout<<endl<<"1: science";
cout<<endl<<"2: commerce"<<endl;
cin>>str;

switch(str)
{

case 1: cout<<endl<<"Choose subjects ";
	cout<<endl<<"a: Physics     :Rs 9600/yr";
	cout<<endl<<"b: Chemistry   :Rs 9600/yr ";
	cout<<endl<<"c: Maths       :Rs 9600/yr   ";
	cout<<endl<<"d: Computers   :Rs 10000/yr";
	cout<<endl<<"e: English     :Rs 7000/yr"<<endl;;
	gets(b);
	break;
case 2: cout<<endl<<"Choose subjects ";
	cout<<endl<<"f: accounts      :Rs 9600/yr";
	cout<<endl<<"g: bussiness std.:Rs 9600/yr ";
	cout<<endl<<"h: Maths         :Rs 9600/yr   ";
	cout<<endl<<"i: Economics     :Rs 10000/yr";
	cout<<endl<<"j: English       :Rs 7000/yr"<<endl;;
	gets(b);
	break;
}
for(int q=0;b[q]!='\0';q++)
{
switch(b[q])
{

case 'a': tfees+=9600;
	s[x]=1;
	break;
case 'b': tfees+=9600;
	s[x]=2;
	break;
case 'c': tfees+=9600;
	  s[x]=3;
	break;
case 'd': tfees+=10000;
	s[x]=4;
	break;
case 'e': tfees+=7000;
	s[x]=5;
	break;
case 'f': tfees+=9600;
	 s[x]=6;
	 break;
case 'g': tfees+=9600;
	s[x]=7;
	break;
case 'h': tfees+=9600;
	s[x]=3;
	break;
case 'i': tfees+=10000;
	s[x]=8;
	break;
case 'j': tfees+=7000;
	s[x]=5;
	break;

}
x++;
}
cout<<"total fees :"<<tfees;
getch();
inst_amt=tfees/5;
}
void info::update_stud()                        // deposit fees
{
if(inst_dn!=5)
{
gotoxy(34,4);
cout<<"Deposit fee ";
inst_dn++;
cout<<endl<<endl<<endl<<"Installment amount :";
cout<<inst_amt;
pfees+=inst_amt;
lfees=tfees-pfees;
}
}

void info::display()                            // Display Selected Record
{
cout<<"Reg. No: "<<reg_no;
cout<<endl<<"Name : ";
puts(name);
cout<<endl<<"Standard :"<<std;
cout<<endl<<"Address : ";
puts(address);
cout<<endl<<"Installments : "<<inst_dn<<"/ 5";
cout<<endl<<"Phone No. :";
puts(phone);
cout<<"Stream :";
if(str==1)
cout<<"SCIENCE";
else
cout<<"COMMERCE";
cout<<endl<<"******* S U B J E C T S *******";
for( int t=0;t<x;t++)
switch(s[t])
{
case 1: cout<<endl<<"Physics";
	break;
case 2: cout<<endl<<"Chemistry";
	break;
case 3: cout<<endl<<"Maths";
	break;
case 4: cout<<endl<<"Computer";
	break;
case 5: cout<<endl<<"English";
	break;
case 6: cout<<endl<<"Accounts";
	break;
case 7: cout<<endl<<"Bussiness std.";
	break;
case 8: cout<<endl<<"Economics";
	break;
}
cout<<endl<<"Total Fees :"<<tfees;
cout<<endl<<"fees paid :"<<pfees;
cout<<endl<<"fees left :"<<lfees;
}


void info::display2()                             // display all records
{
cout<<endl<<endl<<" Reg no :"<<reg_no;
cout<<endl<<" Name :"<<name;
cout<<endl<<" Stream :";
if(str==1)
cout<<"SCIENCE";
else
cout<<"COMMERCE";
cout<<endl<<"*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.";

}
int info::ret()                                   //return the reg_no.
{
return(reg_no);
}


int info::srch_name(char v[])                      //search by name
{
int w;
w=strcmp(v,name);
if(w==0)
display();
return w;
}


void main()                                       // Main
{
textcolor(RED);
textbackground(WHITE);
clrscr();
info i;
fstream f1,f2,f3,f4;
int p=0 , g=0,o=0,y,m=0,opt,jkl=0,ctr=0;
char v[50],pswrds[50];
clrscr();
gotoxy(30,7);
cout<<" D.A.V. PUBLIC SCHOOL "  ;
gotoxy(26,8);
cout<<" for commerce and science only";
delay(1000);
load();
f1.open("sdc.txt",ios::in);
if(f1.fail())
m=0;
else
{
while(!f1.eof())
{
f1.read((char*)&i,sizeof(i));
m=i.ret();
}
}
f1.close();
f4.open("password.txt",ios::in);
f4>>pswrds;
f4.close();
for(int yr=0;pswrds[yr]!='\0';yr++);
yr--;
jkl=m;
clrscr();
pass(yr);
clrscr();
do
{
flag3:
clrscr();
cout<<endl<<"Choose What To Do";
cout<<endl<<endl<<"1: Enter A new Entry.";
cout<<endl<<"2: Deposit Fees.";
cout<<endl<<"3: Show a particular record.";
cout<<endl<<"4: Show All Records";
cout<<endl<<"5: Total No Of Student In Institute";
cout<<endl<<endl<<"6: Delete a record";
cout<<endl<<"7: Settings";
cout<<endl<<"8: Sign Out"<<endl;
cin>> y;
switch(y)
{
case 1: clrscr();
	i.constr();
	f1.open("sdc.txt",ios::out|ios::ate);
	jkl++;
	i.input_stud_new(m);
	f1.write((char*)&i,sizeof(i));
	f1.close();
	clrscr();
	gotoxy(34,7);
	cout<<" Saving Your Updates ";
	delay(1000);
	clrscr();
	gotoxy(34,7);
	cout<<" Done !";
	delay(1000);
	break;
case 2: clrscr(); o=0;p=0;
	f1.open("sdc.txt",ios::in);
	while(!f1.eof())
	{
	f1.read((char*)&i,sizeof(i));
	i.display2();
	p++;
	getch();
	if(p%10==0)
	{
	break;
	}
	}
	f1.close();
	clrscr();
	cout<<"enter the registration number of the student : ";
	cin>>g;
	f1.open("sdc.txt",ios::in);
	while(!f1.eof())
	{
	f1.read((char*)&i,sizeof(i));
	o=i.ret();
	if(g==o)
	{
	i.update_stud();
	break;
	}
	}
	i.display();
	getch();
	f1.close();
	clrscr();
	gotoxy(34,7);
	cout<<" Saving Your Updates ";
	delay(2000);
	clrscr();
	gotoxy(34,7);
	cout<<" done !";
	break;
case 3: clrscr(); o=1;p=0;
	f1.open("sdc.txt",ios::in);
	cout<<"enter the name of the student : ";
	gets(v);
	while((!f1.eof())&&(o!=0))
	{
	f1.read((char*)&i,sizeof(i));
	o=i.srch_name(v);
	}
	getch();
	f1.close();
	break;
case 4: clrscr(); p=0;
	if(jkl!=0)
	{
	f1.open("sdc.txt",ios::in);
	while(!f1.eof())
	{
	f1.read((char*)&i,sizeof(i));
	if(f1.eof()!=1)
	{
	i.display2();
	p++;
	getch();
	if(p%10==0)
	clrscr();
	}
	}
	f1.close();
	}
	else
	cout<<"file is empty ";
	getch();
	break;
case 5: clrscr();
	cout<<"Total No Of Students In The Institute :"<<jkl;
	getch();
	break;
case 7: clrscr(); int lk=1;     char e[50],z[50];
	gotoxy(5,5);
	while(ctr!=3)
	{
	clrscr();
	ctr++;
	cout<<" Enter Password : ";
	gets(e);
	f4.open("password.txt",ios::in);
	f4>>z;
	lk=strcmp(z,e);
	if(lk==0)
	{
	ctr=3;
	clrscr();
	gotoxy(31,2);
	cout<<" A D M I N   S E T T I N G S";
	cout<<endl<<"1: delete all data ";
	cout<<endl<<"2: create backup  ";
	cout<<endl<<"3: restore from backup ";
	cout<<endl<<"4: change password\n ";
	cout<<endl<<"5: Back To Main Menu ";
	cin>>opt;
	switch(opt)
	{
	case 1: clrscr(); int w;
		cout<<" Are you sure you want to delete all data ?";
		cout<<endl<<" WARNING : please backup your data. ";
		cout<<endl<<endl<<" 1: yes ";
		cout<<endl<<" 2: no";
		cin>>w;
		if(w==1)
		{
		remove("sdc.txt");
		}
		break;
	case 2: clrscr();
		if(jkl!=0)
		{
		gotoxy(34,7);
		cout<<" creating backup ... ";
		delay(2000);
		gotoxy(34,7);
		cout<<" backup created ";
		gotoxy(34,8);
		cout<<" file name : sdc_backup.txt ";
		getch();
		f1.open("sdc.txt",ios::in);
		f2.open("sdc_bckp.txt",ios::out);
		char jh;
		while(!f1.eof())
		{
		f1>>jh;
		f2<<jh;
		}
		f1.close();
		f2.close();
		}
		else
		cout<<" ERROR : No data in file ";
		break;
	case 3: clrscr();
		f2.open("sdc_bckp.txt",ios::in);
		if(f2.fail())
		{
		cout<<" Backup Not Available ";
		getch();
		}
		else
		{
		f2.close();
		remove("sdc.txt");
		rename("sdc_bckp.txt","sdc.txt");
		}
		break;
	case 4: chpass();
		break;
	case 5: goto flag3;
	default: cout<<" Wrong input ";
	}
	}
	else
	cout<<"try again";
	}
	break;
case 6: char x[50];int r;
	clrscr();
	jkl--;
	f1.open("sdc.txt",ios::in);
	f3.open("temp.txt",ios::out);
	cout<<"\n Enter the name of student whose record is to be deleted: ";
	gets(x);
	clrscr();
	while(!f1.eof())
	{
	f1.read((char*)&i,sizeof(i));
	if(f1.eof()!=1)
	{
	r=i.srch_name(x);
	if(r!=0)
	f3.write((char*)&i,sizeof(i));
	}
	}
	f3.close();
	remove("sdc.txt");
	rename("temp.txt","sdc.txt");
	f1.close();
	f3.close();
	break;

case 8: clrscr();
	gotoxy(34,7);
	cout<<" Signing Out ";
	delay(1000);
	clrscr();
	gotoxy(34,7);
	cout<<" Have A GOOD DAY !";
	delay(1000);
	break;
default: cout<<endl<<" I n v a l i d   I n p u t ";
}
}while(y!=8);
}

void load()                                 // Loading
{
 int i,j;
gotoxy(50,20);
cout<<"Loading your data";
for(int l=0;l<2;++l)
{
delay(300);
cout<<".";
}
for(i=1;i<7;i++)
{
if(i%2!=0)
{
gotoxy(3,5);
cout<<".";
delay(150);
gotoxy(5,4);
cout<<".";
delay(150);
gotoxy(8,4);
cout<<".";
delay(150);
gotoxy(10,5);
cout<<".";
delay(150);
gotoxy(10,6);
cout<<".";
delay(150);
gotoxy(8,7);
cout<<".";
delay(150);
gotoxy(5,7);
cout<<".";
delay(150) ;
gotoxy(3,6);
cout<<".";
delay(150)  ;
}
if(i%2==0)
{
gotoxy(3,5);
cout<<" ";
delay(150);
gotoxy(5,4);
cout<<" ";
delay(150);
gotoxy(8,4);
cout<<" ";
delay(150);
gotoxy(10,5);
cout<<" ";
delay(150);
gotoxy(10,6);
cout<<" ";
delay(150);
gotoxy(8,7);
cout<<" ";
delay(150);
gotoxy(5,7);
cout<<" ";
delay(150) ;
gotoxy(3,6);
cout<<" ";
delay(150)  ;
}
}
delay(500);
clrscr();
int tr=22,te;
for(int ty=1;ty<=tr;ty++)
{
delay(50);
for(te=2;te<=ty;te++)
{
gotoxy(0,0);
cout<<" D.A.V.P.S ";
}
}
gotoxy(25,14);
for(int ctr=1;ctr<=34;ctr++)
{
delay(100);
cout<<char(219);
}
delay(2000);
gotoxy(32,14);
cout<<"Loading completed";
delay(500);
clrscr();
gotoxy(38,14);
cout<<"Welcome";
delay(1000);
}

void pass(int yr)                      // Login
{
int k=0;
fstream f4;
f4.open("password.txt",ios::in);
int chk=0;
char a[50];
char ps[50];
f4>>a;
f4.close();
chk++;
flag1:
clrscr();
cout<<"USERNAME : D.A.V.";
cout<<"\nPASSWORD : ";
for(k=0;k<=yr;k++)
{
ps[k]=getch();
cout<<"*";
}
ps[k]='\0';
getch();
int f=strcmp(a,ps);
getch();
if(f==0)
cout<<"\n\nAccess Granted.";
else
{
cout<<"\n\nAccess Denied.";
if(chk!=3)
{
cout<<chk;
chk++;
cout<<endl<<endl<<"try again."<<endl;
getch();
goto flag1;
}
else
exit(0);
}
}
void chpass()                           	// change password
{
 clrscr();
 fstream f5;
 char l[50],a[50],m[50],n[50];
 f5.open("password.txt",ios::in);
 cout<<"Enter current password : ";
 gets(l);
 f5>>a;
 int k=strcmp(a,l) ;
 if(k==0)
 {
  f5.close();
  cout<<endl<<"enter new password : ";
  gets(m);
  cout<<endl<<"confirm new password : ";
  gets(n);
  int q=strcmp(m,n);
  if(q==0)
  {
   clrscr();
   gotoxy(34,7);
   cout<<"Password changed";
   f5.open("password.txt",ios::out);
   f5<<m;
   delay(1000);
   clrscr;
  }

  else
  {
   cout<<endl<<"password not matched" ;
   getch();
   }
 }
 else
 {
  cout<<"Wrong password";
  getch();
  }  }



