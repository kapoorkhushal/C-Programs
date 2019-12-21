   	              /*Program to implement class*/ 

	 #include<iostream.h>
	 #include<conio.h>
	 class trainer
	 {
		int Tno;
		char Tname[20],specialisation[20];
		int days;
		public:
		trainer(){}
		void Tentry()
		{
		     cout<<"Enter the details of trainer:"<<endl;
		     cin>>Tno>>Tname>>specialisation>>days;
		}
		void Tdisplay()
		{	
		     cout<<"Details of trainer are :"<<endl;
		     cout<<"Number of trainer is :"<<Tno<<endl;
		     cout<<"Name of trainer is :"<<Tname<<endl;
		     cout<<"Specialisation of trainer is            :"<<specialisation<<endl;
		     cout<<"Number of days are :"<<days<<endl;
		}
	 }a;
	 class learner
	 {
		char regno[10],lname[20],program[10];
		public:
		learner(){}
		void Lentry()
		{
		     cout<<"Enter details of learner :"<<endl;
		     cin>>regno>>lname>>program;
		}
		void Ldisplay()
		{
		     cout<<"The details of the leraner are :"<<endl;
		     cout<<"Registration number of learner is :"<<regno<<endl;
		     cout<<"Name of learner is :"<<lname<<endl;
		     cout<<"Name of program is :"<<program<<endl;
		}
	 }b;
	 class institute:public learner,public trainer
	 {
		char Icode[10],Iname[20];
		public:
		institute(){}
		void Ientry()
		{
		     cout<<"Enter details of institute:";
		     cin>>Icode>>Iname;
		}
		void Idisplay()
		{
		     cout<<"Details of the institute are:"<<endl;
		     cout<<"Code of the institute is :"<<Icode<<endl;
		     cout<<"Name of institute is :"<<Iname<<endl;
		}
	 }c;
	 void main()
	 {
		clrscr();
		a.Tentry();
		a.Tdisplay();
		b.Lentry();
		b.Ldisplay();
		c.Ientry();
		c.Idisplay();
		getch();
	 }











