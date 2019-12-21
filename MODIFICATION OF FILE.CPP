		/* Program to modify in a file */
	#include<fstream.h>
	#include<conio.h>
	#include<string.h>
	class student
	{
	    int rollno;
	    char name[10];
	    public:
	    void input()
	    {
		cout<<"Enter the data :";
		cin>>rollno>>name;
	    }
	    void output()
	    {   cout<<"Data is : ";
		cout<<rollno<<"\t"<<name;
	    }
	    int retroll()
	    {
		return rollno;
	    }
	}s;
	void write()
	{
	    char c;
	    ofstream f("C:\\STUD.dat",ios::app);
	    while(1)
	    {
		s.input();
		f.write((char*)&s,sizeof(s));
		cout<<"Do you want to continue : ";
		cin>>c;
		if(c=='n'||c=='N')
		break;
	    }
	    f.close();
	}
	void read()
	{
	    int r;
	    fstream f("C:\\STUD.dat",ios::in|ios::app);
	    cout<<"Enter a rollno. to modify : ";
	    cin>>r;
	    char c;
	    long p;
	    while(f.read((char*)&s,sizeof(s)))
	    {

		if(r==s.retroll())
		{
		     p=f.tellg();
		     s.output();
		     cout<<endl;
		     cout<<"Are you sure you want to continue : ";
		     cin>>c;
		     if(c=='y'||c=='Y')
		     s.input();
		     f.seekg(p,ios::beg);
		     f.write((char*)&s,sizeof(s));
		}
	    }
	    f.close();
	}
	void main()
	{
	    clrscr();
	    write();
	    read();
	    getch();
	}