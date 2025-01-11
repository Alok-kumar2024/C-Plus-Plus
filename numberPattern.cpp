#include<iostream>
using namespace std ;

int main()
{
	int num ;
	cout <<"Enter Number : " ;
	cin >> num ;

	for(int i = 1 ; i <=num ; i ++)
	{
		for(int j =0 ; j<i;j++)
		{
			cout << i ;
		}
		cout <<endl ;
	}
	
	for(int i = num ; i >0 ; i --)
	{
		for(int j =0 ; j<i;j++)
		{
			cout << i ;
		}
		cout <<endl ;
	}
}
