#include<iostream>
using namespace std;

class Date
{
	private: int date,month,year;
	
	public:
	 Date()
	{		
		date=13;
		month=05;
		year=2004;
	}
	void display()
	{
		cout<<date<<"-"<<month<<"-"<<year<<endl;
	}
};
int main()
{
	Date D;
	D.display();
}
