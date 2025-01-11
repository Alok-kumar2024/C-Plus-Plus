#include<iostream>
using namespace std ;

int main()
{
	int num ;
	cout << "Enter Number : " ;
	cin >> num ;
	
	if(num%2==0) 
	{
		cout  <<"Only Odd Number Allowed...."<<endl ;
		return 0;
	}
	
	for(int i = 1 ; i<=(num/2)+1 ; i++)
	{
		for(int j = 0 ; j <=(num/2)-i+1 ; j++)
		{
			cout << " " ;
		}
		
		for(int k = 1 ; k<=2*i-1 ; k++)
		{
			cout <<"*" ;
		}
	
		cout << endl ;
	}
	
	for(int i = num/2 ; i >=1 ; i--)
	{
		for(int j = 0 ; j<=(num/2)-i+1 ;j++)
		{
			cout << " " ;
		}
	
		for(int k = 1 ; k<=2*i-1 ; k++)
		{
			cout <<"*" ;
		}
		
		cout <<endl ;
	}
}
