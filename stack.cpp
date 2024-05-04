#include <iostream>
using namespace std;
int maxsize=4;
class stack
{
	private:
		int arr[4],top;
	public:
		stack()
		{
			top=-1;
			if(top==-1)
				cout<<"Stack is empty."<<endl;
			else
				for (int i=top;i>=0;i--)
				cout<<"value "<<i+1<<": "<<arr[i]<<endl;
		}
		void push(int number)
		{
			if(top==maxsize-1)
				cout<<" stack is overflow "<<endl;
			else
				top++;
				arr[top]=number;
		}
		void pop()
		{
			if (top==-1)
			cout<<"Stack underflow"<<endl;
			else
			{
			
			cout<<arr[top]<<" popped successfully."<<endl;
			top--;
			}
		}
		void display()
		{
			if(top==-1)
				cout<<"Stack is empty."<<endl;
			else
				for (int i=top;i>=0;i--)
				cout<<"value "<<i+1<<": "<<arr[i]<<endl;
		}
		~stack()
		{
			cout<<"Stack Destructed successfully"<<endl;
		}
		
};
 
int main()
{
	stack s1;
	char ch;
	do{
		cout<<"choose "<<endl;
		cout<<"1. push"<<endl;
		cout<<"2. pop"<<endl;
		cout<<"3. display"<<endl;
		cout<<"4. exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case '1':
				int n;
				cout<<"Enter a number: "<<endl;
				cin>>n;
				s1.push(n);
				break;
			case '2':
				s1.pop();
				break;
			case '3':
				s1.display();
				break;
			case '4':
				cout<<"Exit";
				break;
			default:
				cout<<"Invalid option!";
				break;
		}
	}
	while(ch!='4');
	
	return 0;
}
