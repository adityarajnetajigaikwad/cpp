#include <iostream>
using namespace std;

int main() 
{

	int n; 

	cout<<"Enter the number of elements: "<<endl;

	cin>>n;

	int arr[n]; 

	cout<<"Enter "<<n<<" elements:"<<endl;

	for (int i = 0; i < n; i++) {

	cin>>arr[i]; 

	cout<<"You entered the following elements:"<<endl;

	for (int i = 0; i < n; i++) 
	{
	
		cout<<arr[i]<< endl;

	}

}

}
