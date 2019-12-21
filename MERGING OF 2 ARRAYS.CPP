		       /* Merging of 2 Arrays */

	#include<iostream.h>
	#include<conio.h>
	void merge(int A[],int B[],int C[],int m,int n)
	{
	    int ctr1=0,ctr2=0,ctr3=0;
	    while(ctr1<m&&ctr2<n)
	    {
		if(A[ctr1]<B[ctr2])
		{
		   C[ctr3]=A[ctr1];
		   ctr1++;
		   ctr3++;
		}
		else
		{
		   C[ctr3]=B[ctr2];
		   ctr2++;
		   ctr3++;
		}
	    }
	}   //end of function
	void main()
	{
	    clrscr();
	    int A[5],B[5],C[10],m=5,n=5,mn;
	    mn=m+n;
	    cout<<"Enter the elements in the arrays :";
	    for (int i=0;i<5;i++)
	    {
	    cin>>A[i]>>B[i];
	    }
	    merge(A,B,C,m,n);
	    cout<<"The new merged array is :";
	    for (i=0;i<mn;i++)
	    cout<<C[i]<<" ";
	    getch();
	}   //end of main