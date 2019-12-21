#include<iostream>

using namespace std;
class matrix
{
	int A[10][10],B[10][10];
	float C[10][10];
	int num;
	public:
	int len1,len2;
	void input1();
	void input2();
	void display1();
	void display2();
	void addition();
	void subtraction();
	void multiplication();
	void scalarmultiplication();
	void scalardivision();
	void transpose();
	void modify();
};

int main()
{
	system("clear");
	int ch;
	matrix M;
		cout<<endl<<"MENU ::"<<endl;
		cout<<"1.Addition of matrices"<<endl;
		cout<<"2.Subtraction of matrices"<<endl;
		cout<<"3.Multiplication of matrices"<<endl;
		cout<<"4.Scalar Multiplication of Matrix"<<endl;
		cout<<"5.Scalar Division of Matrix"<<endl;
		cout<<"6.Transpose of Matrix"<<endl;
		cout<<"7.Alteration of Matrix"<<endl;
		cout<<"ENTER YOUR CHOICE:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<endl<<"Enter the number of rows of the matrix : ";
				cin>>M.len1;
				cout<<endl<<"Enter the number of columns of the matrix : ";
				cin>>M.len2;
				M.input2();
				M.display2();
				M.addition();break;
			case 2:
				cout<<endl<<"Enter the number of rows of the matrix : ";
				cin>>M.len1;
				cout<<endl<<"Enter the number of columns of the matrix : ";
				cin>>M.len2;
				M.input2();
				M.display2();
				M.subtraction();break;
			case 3:
				M.multiplication();break;
			case 4:
				cout<<endl<<"Enter the number of rows of the matrix : ";
				cin>>M.len1;
				cout<<endl<<"Enter the number of columns of the matrix : ";
				cin>>M.len2;
				M.input1();
				M.display1();
				M.scalarmultiplication();break;
			case 5:
				cout<<endl<<"Enter the number of rows of the matrix : ";
				cin>>M.len1;
				cout<<endl<<"Enter the number of columns of the matrix : ";
				cin>>M.len2;
				M.input1();
				M.display1();
				M.scalardivision();break;
			case 6:
				cout<<endl<<"Enter the number of rows of the matrix : ";
				cin>>M.len1;
				cout<<endl<<"Enter the number of columns of the matrix : ";
				cin>>M.len2;
				M.input1();
				M.display1();
				M.transpose();break;
			case 7:
				cout<<endl<<"Enter the number of rows of the matrix : ";
				cin>>M.len1;
				cout<<endl<<"Enter the number of columns of the matrix : ";
				cin>>M.len2;
				M.input1();
				M.display1();
				M.modify();break;
		}
	cout<<endl;
}

void matrix :: input2()
{
	cout<<"Matrix-1 INPUT:"<<endl;
	for(int i=0;i<len1;i++)
		for(int j=0;j<len2;j++)
		{
			cout<<"Enter elements at location ["<<i<<j<<"]:";
			cin>>A[i][j];
		}
	cout<<"Matrix-2 INPUT:"<<endl;
	for(int i=0;i<len1;i++)
		for(int j=0;j<len2;j++)
		{
			cout<<"Enter elements at location ["<<i<<j<<"]:";
			cin>>B[i][j];
		}
}

void matrix :: input1()
{
	cout<<"Matrix INPUT:"<<endl;
	for(int i=0;i<len1;i++)
		for(int j=0;j<len2;j++)
		{
			cout<<"Enter elements at location ["<<i<<j<<"]:";
			cin>>C[i][j];
		}
}

void matrix :: display2()
{
	cout<<"Entered Matrix-1 is :"<<endl;
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			cout<<A[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Entered Matrix-2 is :"<<endl;
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			cout<<B[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
}

void matrix :: display1()
{
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			cout<<C[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
}

void matrix :: addition()
{
	for(int i=0;i<len1;i++)
	for(int j=0;j<len2;j++)
	{
		C[i][j]=A[i][j]+B[i][j];
	}
	cout<<"Sum of matrix are:"<<endl;
	display1();
}

void matrix :: subtraction()
{
	for(int i=0;i<len1;i++)
	for(int j=0;j<len2;j++)
	{
		C[i][j]=A[i][j]-B[i][j];
	}
	cout<<"Difference b/w matrices are:"<<endl;
	display1();
}

void matrix :: multiplication()
{
	int m,n,p,q,i,j;
	cout<<"Enter the length of 1st matrix [Row x Col]:";
	cin>>m>>n;
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
{
	cout<<"Enter elements at location ["<<i<<j<<"]:";
	cin>>A[i][j];
}
	cout<<"Enter the length of 2nd matrix [Row x Col]:";
	cin>>p>>q;
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
{
	cout<<"Enter elements at location ["<<i<<j<<"]:";
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

void matrix :: scalarmultiplication()
{
	cout<<"Enter the Scalar Number to be multiplied:";
	cin>>num;
	for(int i=0;i<len1;i++)
	for(int j=0;j<len2;j++)
	{
		C[i][j]=num*C[i][j];
	}
	cout<<"Scalar multiplication of matrix is:"<<endl;
	display1();
}

void matrix :: scalardivision()
{
	cout<<"Enter the Scalar Number to be divide:";
	cin>>num;
	for(int i=0;i<len1;i++)
	for(int j=0;j<len2;j++)
	{
		C[i][j]=C[i][j]/num;
	}
	cout<<"Scalar division of matrix is:"<<endl;
	display1();
}

void matrix :: transpose()
{
	cout<<"Transpose of matrix is:"<<endl;
	for(int i=0;i<len1;i++)
	{
		for(int j=0;j<len2;j++)
		{
			cout<<C[j][i]<<'\t';
		}
		cout<<endl;
	}
}

void matrix :: modify()
{
	int row,col;
	char flag1='Y',flag2;
	do{
	cout<<"Enter the postion of the element at which you want to modify [row] X [column] :";
	cin>>row;
	cout<<" X ";
	cin>>col;
	cout<<"Number at entered position is :"<<C[row][col]<<endl;
	cout<<"Do you want to modify (Y/N):";
	cin>>flag2;
	if(flag2 == 'Y' || flag2 == 'y')
	{
		int num;
		cout<<endl<<"Enter the number :";
		cin>>num;
		C[row][col]=num;
		cout<<"New Matrix is :"<<endl;
		display1();
		cout<<"Do you want to modify another (Y/N) :";
		cin>>flag1;
	}
	else
	{
		cout<<"Do you want to modify another (Y/N) :";
		cin>>flag1;
	}	
	}while(flag1 == 'Y' || flag1 == 'y');
}
