#include<iostream>
using namespace std ;

int main()
{
	int num ;
	int base ;
	cout << "Enter Number : " ;
	cin >> num ;
	cout << "Enter Base : ";
	cin >> base ;
	
	int prod = num ;
	for(int i =1 ; i <base ;i++)
	{
		prod *=num ;
	
	}
	
	cout << num <<" raised to the power " << base << " is : " << prod << endl ;
	
}
	
