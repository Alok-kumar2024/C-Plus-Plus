#include<iostream>
using namespace std ;

int main()
{
	int table ;
	
	cout <<"Enter the number of whose table you want : " ;
	cin >> table ;
	
	for(int i =1 ; i<=10 ; i++)
	{
		cout <<table<<" * " <<i << " = " <<table*i <<endl ;
	}
}
