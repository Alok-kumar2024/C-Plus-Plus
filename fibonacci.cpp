#include<iostream>
using namespace std ;

int main ()
{
	int num ; 
	cout << "Enter Number : "; 
	cin >> num ;
	int a=0,b=1 ;
	int sum = a+b ;

	for(int i =0 ; i <num ; i++)
	{
		cout << a << " " <<endl ;
	//	cout<< sum << " " ;
		
		sum = a+b ;
		a = b ;
		b = sum ;
		
	}
}
