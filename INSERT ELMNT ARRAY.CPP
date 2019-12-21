	/* Program to insert an item in an array at specified position */

	#include<iostream.h>
	#include<conio.h>
	void main()
	{
	    clrscr();
	    int a[100],i,pos,num,item,size;
	    cout<<"Enter the number of elements :";
	    cin>>size;
	    cout<<"Enter the elements of an array :"<<endl;
	    for(i=0;i<size;i++)
	    cin>>a[i];
	    cout<<endl;
	    cout<<"Now the array is :"<<endl;
	    for(i=0;i<size;i++)
	    cout<<"Element at position "<<i+1<<" is "<<a[i]<<endl;
	    cout<<"Enter the element to insert :";
	    cin>>num;
	    cout<<"Enter the position also :";
	    cin>>pos;
	    cout<<endl;
	    pos--;
	    for(i=size;i>=pos;i--)
	    a[i]=a[i-1];
	    a[pos]=num;
	    cout<<"New array is :"<<endl;
	    for(i=0;i<size;i++)
	    cout<<"Element at position "<<i+1<<" is "<<a[i]<<endl;
	    getch();
	}
