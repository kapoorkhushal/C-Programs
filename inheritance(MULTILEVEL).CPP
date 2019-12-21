		  // Program to implement inheritance
#include <iostream.h>
#include <conio.h>
class drugs
{
	protected :
		char category [10] ;
		char dateofmanufacture [10] ;
		char company [20] ;
	public :
		void enterdrugdetails ()
		{
			cout << " Enter category : " ;
			cin >> category ;
			cout << " Enter date of manufacture : " ;
			cin >> dateofmanufacture ;
			cout << " Enter company : " ;
			cin >> company ;
		}
		void showdrugdetails ()
		{
			cout << " Category = " ;
			cout << category << endl ;
			cout << " Date of manufacture = " ;
			cout << dateofmanufacture << endl ;
			cout << " Company = " ;
			cout << company << endl ;
		}

}d ;
class tablet : public drugs
{
	protected :
		char tablet_name [30] ;
		char volume_label [20] ;
	public :
		void entertabletdetails ()
		{
			cout << " Enter tablet name : " ;
			cin >> tablet_name ;
			cout << " Enter volume label : " ;
			cin >> volume_label ;
		}
		void showtabletdetails()
		{
			cout << " Tablet name = " ;
			cout << tablet_name << endl ;
			cout << " Volume label = " ;
			cout << volume_label <<  endl ;
		}
}t;
class painrelief : public tablet
{
	protected:
		int dossageunits ;
		char side_effect [20];
		int use_within_days ;
	public:
		void enterdetails()
		{
			cout << " Enter dosage units : " ;
			cin >> dossageunits ;
			cout << " Enter side effects : " ;
			cin >> side_effect ;
			cout << " Enter time within use : " ;
			cin >> use_within_days ;
		}
		void showdetails()
		{
			cout << " Dossage units = " ;
			cout << dossageunits << endl ;
			cout << " Side effects = " ;
			cout << side_effect << endl ;
			cout << " Use within days = " ;
			cout << use_within_days ;
		}
}p;
void main()
{
	clrscr () ;
	p.enterdrugdetails () ;
	p.entertabletdetails () ;
	p.enterdetails () ;
	p.showdrugdetails () ;
	p.showtabletdetails () ;
	p.showdetails () ;
	getch();
}





