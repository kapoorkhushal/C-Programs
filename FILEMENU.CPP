#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
 void main()
{
  clrscr();
  int c; char a='y';
   while(a=='y'||a=='Y')
 {
    cout<<"Here is the menu"<<endl;
    cout<<"1.Write in a file"<<endl;
    cout<<"2.Read a file"<<endl;
    cout<<"3.Read and write in a file"<<endl;
    cout<<"4.Count the number of spaces in a file"<<endl;
    cout<<"5.Count the number of occurences an alphabet"<<endl;
    cout<<"6.Count the number of vowels in a file"<<endl;
   cout<<"7.Count the number of words in a file"<<endl;
   cout<<"8.Count the number of lines in a file"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>c;
     switch(c)
  {
    case 1:
   {
      char ch;
      fstream f("D:\\don.txt",ios::out);
      cout<<"Enter ~ to end";
      while((ch=cin.get())!='~')
    {
       f<<ch;
    }
       f.close();
       break;
    }
     case 2:
    {
       char ch;
       fstream f("D:\\don.txt",ios::in);
        while(!f.eof())
       {
	 ch=f.get();
	 f>>ch;
	 cout<<ch;
       }
	 f.close();
	 break;
    }
     case 3:
     {
	 char ch;
	 fstream f;
	 f.open("D:\\don.txt",ios::out);
	 cout<<"Enter ~ to end";
	  while((ch=cin.get())!='~')
	  {
	    f<<ch;
	  }
	    f.open("D:\\don.txt",ios::in);
	     while(!f.eof())
	   {
	      ch=f.get();
	      f>>ch;
	      cout<<ch;
	   }
	     f.close();
	     break;
     }
     case 4:
     {
	  int s=0; char ch;
	  fstream f;
	  f.open("D:\\don.txt",ios::out);
	  cout<<"Enter ~ to end";
	   while((ch=cin.get())!='~')
	   {
	     f<<ch;
	   }
	     f.close();
	     f.open("D:\\don.txt",ios::in);
	      while(!f.eof())
	      {
	        ch=f.get();
	        if(ch==' ')
	        s++;
	      }
	       cout<<"Number of spaces are"<<s;
	       f.close();
	       break;
      }
      case 5:
      {
           int s=0; char ch,bb;
           fstream f;
	   f.open("D:\\don.txt",ios::out);
	   cout<<"Enter ~ to end";
	     while((ch=cin.get())!='~')
		{
		  f<<ch;
		 }
	    f.close();
            f.open("D:\\don.txt",ios::in);
	    cout<<"Enter the alphabet you want to search";
	    cin>>bb;
		while(!f.eof())
		 {
		   ch=f.get();
		   if(ch==bb)
		   s++;
		 }
	   cout<<"Number of"<<bb<<"found are:"<<s;
	   f.close();
           break;
     }
     case 6:
     {
	   int s=0; char ch;
	   fstream f;
           f.open("D:\\don.txt",ios::out);
	   cout<<"Enter ~ to end";
	     while((ch=cin.get())!='~')
		 {
		    f<<ch;
		  }
           f.close();
	   f.open("D:\\don.txt",ios::in);
	    while(!f.eof())
		 {
		    ch=f.get();
		    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'
		    ||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		    s++;
		  }
           cout<<"Number of vowels found are:"<<s;
	   f.close();
           break;
    }
     case 7:
    {
           int s=0; char ch;
           fstream f;
           f.open("D:\\don.txt",ios::out);
	   cout<<"Enter ~ to end";
              while((ch=cin.get())!='~')
		 {
		      f<<ch;
		  }
           f.close();
           f.open("D:\\don.txt",ios::in);
             while(f.eof())
                 {
		       ch=f.get();
		       if(ch==' ')
		       s++;
	          }
	    cout<<"Number of words found are:"<<s+1;
            f.close();
	    break;
      }
      case 8:
      {
            int s=0; char ch,line[80],bb;
	    fstream f;
	    f.open("D:\\don.txt",ios::out);
	    cout<<"Enter ~ to end";
	      while((ch=cin.get())!='~')
	        {
		     f<<ch;
		 }
	    f.close();
	    cout<<"Enter the starting alphabet of line";
	     cin>>bb;
	     f.open("D:\\don.txt",ios::in);
	     while(!f.eof())
		{
		   f.getline(line,80,'\n');
	           if(line[0]==bb)
		    s++;
	         }
	     cout<<"Number of lines are:"<<s;
	     f.close();
	     break;
       }
		}      //end of switch
		 cout<<"Do you want to continue?(y/n)";
		 cin>>a;
		   }                   //end of while
			getch();
			}                               //end of main
      
