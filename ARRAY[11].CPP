#include<iostream.h>
#include<conio.h>
#include<process.h>
void addition(int A[][3],int B[][3])
{
	int C[3][3];
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>B[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<endl;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<B[i][j]<<'\t';
}
	cout<<endl;
}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
{
	C[i][j]=A[i][j]+B[i][j];
}
	cout<<"sum of matrix are:"<<endl;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<C[i][j]<<'\t';
}
	cout<<endl;
}
}

void subtraction(int A[][3],int B[][3])
{
	int C[3][3];
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>B[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<endl;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<B[i][j]<<'\t';
}
	cout<<endl;
}
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
{
	C[i][j]=A[i][j]-B[i][j];
}
	cout<<"difference b/w matrices are:"<<endl;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<C[i][j]<<'\t';
}
	cout<<endl;
}
}

void multiplication(int A[][3],int B[][3])
{
	int C[3][3];
	int m,n,p,q;
	cout<<"enter the length of 1st matrix:";
	cin>>m>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	cout<<"enter the length of 2nd matrix:";
	cin>>p>>q;
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>B[i][j];
}
	for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<endl;
	for(i=0;i<p;i++)
{
	for(j=0;j<q;j++)
{
	cout<<B[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<endl;
if(n==p)
{
	for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
{
	C[i][j]=0;
	for(int k=0;k<n;k++)
	C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
}
}
	for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
{
	cout<<C[i][j]<<'\t';
}
	cout<<endl;
}
}
else
	cout<<"Matrix can't be multiplied!";
}


void row(int A[][3])
{
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	for(i=0;i<3;i++)
{
	cout<<"Row "<<i<<" Elements are : ";
	for(j=0;j<3;j++)
{
	cout<<A[j][i]<<" ";
}
	cout<<endl;
}
}

void column(int A[][3])
{
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	for(i=0;i<3;i++)
{
	cout<<"Column "<<i<<" Elements are : ";
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<" ";
}
	cout<<endl;
}
}

void diagonal(int A[][3])
{
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<"1st diagonal elements are:";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
if(i==j)
{
	cout<<A[i][j];
}
	cout<<endl;
	cout<<"2nd diagonal elements are:";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
if(i+j==2)
{
	cout<<A[i][j];
}
}

void sum(int A[][3])
{
	int f=0,s=0;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	f=f+A[i][j];
}
	cout<<"sum of "<<i<<" Column elements are: "<<f<<endl;
	f=0;
}

	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	s=s+A[j][i];
}
	cout<<"sum of "<<i<<" Row elements are: "<<s<<endl;
	s=0;
}
}

void sumd(int A[][3])
{
	int f=0,s=0;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<"sum of first diagonal:";
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
if(i==j)
{
	f=f+A[i][j];
}
}
}
	cout<<f;
	cout<<"sum of second diagonal:";
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
if(i+j==2)
{
	s=s+A[i][j];
}
}
}
	cout<<s;
}

void triangle(int A[][3])
{
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<"lower triangle elements are :";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
if(i>j)
	cout<<A[i][j]<<"  ";
	cout<<endl;
	cout<<"upper triangle elements are :";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
if(j>i)
	cout<<A[i][j]<<"  ";
}

void sumtri(int A[][3])
{
	int l=0,u=0;
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<"Sum of lower triangle elements are :";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
if(i>j)
	l=l+A[i][j];
	cout<<l;
	cout<<endl;
	cout<<"Sum of upper triangle elements are :";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
if(j>i)
	u=u+A[i][j];
	cout<<u;
}

void transpose(int A[][3])
{
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
{
	cout<<"enter elements at location at"<<i<<j<<":";
	cin>>A[i][j];
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[i][j]<<'\t';
}
	cout<<endl;
}
	cout<<"transpose of the given matrix is:"<<endl;
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{
	cout<<A[j][i]<<'\t';
}
	cout<<endl;
}
}

void main()
{
	clrscr();
	int ch;char c='y';
	int A[3][3],B[3][3];
	while(c=='y'||c=='Y')
{
	cout<<"1.Addition of matrices"<<endl;
	cout<<"2.Subtraction of matrices"<<endl;
	cout<<"3.Multiplication of matrices"<<endl;
	cout<<"4.Displaying row elements of a matrix"<<endl;
	cout<<"5.Displaying column elements of a matrix"<<endl;
	cout<<"6.Displaying diagonal elements of a matrix"<<endl;
	cout<<"7.Sum of row elements & column elements of a matrix"<<endl;
	cout<<"8.Sum of diagonal elements of a matrix"<<endl;
	cout<<"9.Displaying lower & upper triangular elements of a matrix"<<endl;
	cout<<"10.Sum of lower & upper triangular elements of a matrix"<<endl;
	cout<<"11.Transpose of a matrix"<<endl;
	cout<<"ENTER YOUR CHOICE:";
	cin>>ch;
switch(ch)
{
	case 1:addition(A,B);break;
	case 2:subtraction(A,B);break;
	case 3:multiplication(A,B);break;
	case 4:row(A);break;
	case 5:column(A);break;
	case 6:diagonal(A);break;
	case 7:sum(A);break;
	case 8:sumd(A);break;
	case 9:triangle(A);break;
	case 10:sumtri(A);break;
	case 11:transpose(A);
}
	cout<<endl<<"Do you want to continue(y/n) :";
	cin>>c;
}
	cout<<endl;
getch();
}
