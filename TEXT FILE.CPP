#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
int choice;
cout<<" /t /t *****MENU***** \n ";
cout<<"WRITE INTO THE FILE: /n";
cout<<"1.READING FROAM A FILE /n";
cout<<"2.DISPLAYING NUMBER OF SPACES /n";
cout<<"3.DISPLAYING NUMBER OF a's or A'a /n";
cout<<"4.DISPLAYING NUMBER OF VOWELS /n";
cout<<"5.DISPALYING NUMBER OF 'THEs' /n";
cout<<"6.DISPLAYING NUMBER OF WORDS /n";
cout<<"7.COUNT NUMBER OF LINES STARTING WITH 'A'/n";
cout<<"Enter your choice:";
cin>>choice;

{
ofstream f("D:\\project.txt");
if(!f)
{
cout<<"UNABLE TO CREATE FILE!";
cin.get();
}
char ch;
cout<<"ENTER '~' TO END";
while((ch==cin.get())!='~')
{
f<<ch;
}
f.close();
}

switch(choice)
{

case1:
{
fstream f;
f.open("D:\\project.txt",ios::out||ios::in);
if(!f)
{
cout<<"UNABLE TO OPEN FILE!";
}
char ch;
while((ch=cin.get())!='~')
{
f<<ch;
}
f.seekg(0,ios::beg);
while(!f.eof())
{
ch=f.get();
cout<<ch;
}
f.close();
}
break;

case2:
{
ifstream f("D:\\project.txt");
int sum=0;
char ch;
while(!f.eof())
{
ch=f.get();
if(ch==' ')
sum++;
}
cout<<sum;
f.close();
}
break;

case3:
{
ifstream f("D:\\project.txt");
int sum=0;
char ch;
while(!f.eof())
{
ch=f.get();
if(ch=='A'&&'a')
sum++;
}
cout<<"NUMBER OF a's & A's ARE:"<<sum;
f.close();
}
break;

case4:
{
ifstream f("D:\\project.txt");
int sum=0;
char ch;
while(!f.eof())
{
ch=f.get();
if(ch=='A'&&'a' &&'E'&&'e'&&'I'&&'i'&& 'O'&&'o'&& 'U'&&'u')
sum++;
}
cout<<"NUMBER OF VOWELS ARE:"<<sum;
f.close();
}
break;

case5:
{
ifstream f("D:\\project.txt");
int sum=0;
char ch;
while(!f.eof())
{
ch=f.get();
if(strcmpi(ch,"the")==0)
sum++;
}
cout<<"NUMBER OF VOWELS ARE:"<<sum;
f.close();
}
break;

case6:
{
ifstream f("D:\\project.txt");
int sum=0;
char ch;
while(!f.eof())
{
ch=f.get();
if(ch==ch)
sum++;
}
cout<<"NUMBER OF WORDS ARE:"<<sum;
f.close();
}
break;

case7:
{
int c=0;
ifstream f;
char line[80];
f.open("D:\\project.txt");
while(!f.eof())
{
if(line[0]=='a'||line[0]=='A')
c++;
}
cout<<"NUMBER OF LINE STARTING WITH a's OR A's ARE:"<<c;
f.close();
}
}
getch();
}