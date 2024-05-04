#include<iostream>
using namespace std;

class Date
{
	private: int date,year;
		    int month;
		    string s;
	public: 

	Date(int d,int m,int y)
	{		
	 	date=d;
		month=m;
		year=y;
			
	}
	void display()
	{
		cout<<date<<"/"<<month<<"/"<<year<<endl;
		if(d1 < d)
		{
			date=(d1+30)-d;		
		}
		else

		switch(month)
		{
			case 1:
			s="JAN";
			break;
			case 2:
			s="FEB";
			break;
			case 3:
			s="MAR";
			break;
	 		case 4:
			s="APR";
			break;
			case 5:
			s="MAY";
			break;
			case 6:
			s="JUN";
			break;
			case 7:
			s="JUL";
			break;
			case 8:
			s="AUG";
			break;
			case 9:
			s="SEP";
			break;
			case 10:
			s="OCT";
			break;
			case 11:
			s="NOV";
			break;
			case 12:
			s="DEC";
			break;
			default :
			s="invalid";
			break;
		}
		cout<<date<<"/"<<s<<"/"<<year<<endl;
		year=year%100;
		cout<<date<<"/"<<s<<"/"<<year<<endl;
	}

};
int main()
{
	int d,m,y,d1,m1,y1;
	cout<<"enter date,month,year"<<endl;
	cin>>d>>m>>y;
	cout<<"enter date,month,year"<<endl;
	cin>>d1>>m1>>y1;
	Date D(d,m,y);
	D.display();
	Date D1(d1,m1,y1);
	D1.display();
}
