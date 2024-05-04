#include<iostream>
#include<iomanip>
using namespace std;
class Student
{ 
	public:char name[30];
  	public:char prn[15];
  	public: char srl[20];
  	public:char mob[10];
  	public:char cl[10];
  	public:char add[50];
  	public:float grade;
	public:void getdata();
	public:void putdata();
}s[100];
void Student::getdata()
{
	int i,n;
	cout<<"enter the number of student :"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{

	 	cout<<"enter sr.no :"<<endl;
	 	cin>>s[i].srl;

	 	cout<<"enter the name of student :"<<endl;
	 	cin>>s[i].name;

	 	cout<<"enter the prn:"<<endl;
 	 	cin>>s[i].prn;

	 	cout<<"enter the mob. no :"<<endl;
	 	cin>>s[i].mob;
 
	 	cout<<"enter the class :"<<endl;
	 	cin>>s[i].cl;

	 	cout<<"enter the address :"<<endl;
	 	cin>>s[i].add;

	 	cout<<"enter the grade: "<<endl;
	 	cin>>s[i].grade;
	}
}

void Student::putdata()
{
 	int i,n;
	cout<<"enter the total student :"<<endl;
	cin>>n;

	cout<<"personal details :"<<endl;
	cout<<"sr.no"<< setw(10)<<" name"<< setw(12)<< "prn"<<setw(16)<< "class"<<setw(15) <<"grad"<<endl;
	for(i=0;i<n;i++)
	{
	 	cout<<s[i].srl <<setw(15)<<s[i].name<< setw(15)<<s[i].prn <<setw(15)<<s[i].cl<< setw(15)<<s[i].grade<<endl;
	}
	cout<<endl;
}
int main()
{
	Student s;
	s.getdata();
	s.putdata();
}





