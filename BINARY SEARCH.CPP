//PROGRAM OF BINARY SEARCH
#include <iostream.h>
#include <conio.h>
void bsearch ( int A[] , int s , int n )
{
	int top , bot , mid , t=0 ;
	top = 0 ;
	bot = s-1 ;
	mid = ( top+bot )/2 ;
	for ( int i=0 ; i<= ( s-1 )/2 ; i++ )
	{
		if ( A[top]==n )
		{
			t=1 ;
			break ;
		}
		else if ( A[bot]==n )
		{
			t=1 ;
			break ;
		}
		else if ( A[mid]==n )
		{
			t=1 ;
			break ;
		}
		else if ( n>A[mid] )
		{
			top=mid+1 ;
			break ;
		}
		else if ( n<A[mid] )
		{
			bot=mid-1 ;
		}
		else
		{
			t=0 ;
		}
	}
       if ( t==1 )
       {
		cout << " Element found " ;
       }
       else
       {
		cout << " Element not found " ;
       }
}
void main()
{
	clrscr() ;
	int A[5] , s , n ;
	cout << " Enter the size of the array : " ;
	cin >> s ;
	cout << " Enter the element of the array : " ;
	for ( int i=0 ; i<s ; i++ )
	{
		cin >> A[i] ;
	}
	cout << " Enter the element to be found : " ;
	cin >> n ;
	bsearch ( A , s , n ) ;
	getch() ;
}                                                                                                                  