	/* Program to delete an element from array */

	#include<iostream.h>
	#include<conio.h>
	void main()
	{
	    clrscr();
	    int a[100],item,n,i,pos=-1;
	    cout<<"Enter the number of elements :";
	    cin>>n;
	    cout<<"Enter the elements in an array :";
	    for (i=0;i<n;i++)
	    {
		cin>>a[i];
	    }
	    cout<<"Enter the element to delete from array :";
	    cin>>item;
	    for (i=0;i<n;i++)
	    {
		 if(item==a[i])
		     pos=i;
	    }
	    if(pos==-1)
	    {
		 cout<<"Number can't be deleted from array\n";
	    }
	    else
	    {
		 for(i=pos;i<n;i++)
		 {
		     a[i]=a[i+1];
		 }
	    }
	    cout<<"New array is :";
	    for(i=0;i<n-1;i++)
	    cout<<a[i]<<" ";
	    getch();
	}   //end of main