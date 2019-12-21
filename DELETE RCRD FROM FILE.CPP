		/* Program to delete a record from a file */
		#include<fstream.h>
		#include<conio.h>
		#include<stdio.h>
		class student
		{
		      int roll;
		      char name[20];
		      public:
		      void getdata()         //function to input data
		      {
			  cout<<"Enter roll no ";
			  cin>>roll;
			  cout<<"Enter name";
			  gets(name);
		      }
		      void display()         //function to display data
		      {
			  cout<<"Roll number is : "<<roll<<endl;
			  cout<<"Name is : "<<endl;
		      }
		      int retroll()
		      {
			  return roll;        //returning roll number(roll)
		      }
		};      //end of class
		void main()
		{
		      clrscr();
		      student s;
		      ifstream f("C:\\Stud.dat",ios::in);
		      ofstream f1("C:\\temp.dat",ios::app);
		      int rno;
		      cout<<"Enter roll number of the student whose record is to be deleted";
		      cin>>rno;
		      while(!f.eof())
		      {
			  f.read((char*)&s,sizeof(s));
			  if(s.retroll()==rno)
			  {
			      s.getdata();
			  }
			  else
			  f1.write((char*)&s,sizeof(s));
		      }
		      f.close();
		      f1.close();
		      remove("Stud.dat");
		      rename("temp.dat","Stud.dat");
		}  //end of main