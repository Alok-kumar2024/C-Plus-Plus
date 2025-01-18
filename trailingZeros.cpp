#include<iostream>
using namespace std ;

int factorial(int num)
	{
		int prod = 1;
		for(int i =1 ; i<=num ; i++) prod *= i ;
		
		return prod ;
	}

int trailingZero(int fact)
	{
		int i =0 ;
		while(fact!=0)
		{
			if(fact%10 != 0) return i ;
			else if(fact%10 == 0) i++ ;
			fact/=10;
		}
		return i ;
	}

int main()
{
	int num ;
	cout << "Enter Number : " ;
	cin >> num ;
	
	int store = num ;
	if(num>31)
		{
			 cout <<"Factorial Too big to calculate , can check the file TrailingZerosAllValid.cpp" << endl ; 
			return 0 ;
		}
	
	int fact = factorial(num);
	cout << "Factorial of Number " <<num<<" is "<<fact <<endl ;
	
	cout <<"Trailing Zeros are : " << trailingZero(fact) <<endl ;	
}
