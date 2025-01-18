#include<iostream>
using namespace std ;

int main()
{
	int n ;
	cout << "Enter Number : " ;
	cin >> n ;
	
	int binary=0 , num ;
	int power,check =0,store = n ;
	while(n != 0)
	{
		num = n%2;
		power = 1 ;
			
		
		for(int i = 0 ; i<check ; i++)
		{
			power *=10 ; 
		}
		
		binary += power*num ;
		n/=2 ;
		check++ ;
	}
	
	cout << "Binary of " << store << " is " << binary << " ." <<endl ;
}
