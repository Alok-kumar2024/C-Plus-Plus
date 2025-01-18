#include<iostream>
using namespace std ;

int main()
{
	int num ; 
	cout <<"Enter Number : " ;
	cin >> num ;

	for(int i = 0 ; i<=num ; i++)
	{
		for(int j = 1 ; j <= (num+1/2)-i ; j++)
		{
			cout << " " ;
		}
		for(int k =1 ; k<=i ; k++)
		{
			cout << k  ;
		}
		
		cout << endl ;
	}
}
