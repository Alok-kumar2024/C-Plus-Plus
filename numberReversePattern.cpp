#include<iostream>
using namespace std ;

int main()
{
	int num ;
	cout <<"Enter Number : " ;
	cin >> num ;
	
	for(int i = 1 ; i <=num ; i++)
	{
		for(int l = 1 ; l<=num -i ; l++) cout <<" " ;
		
		for(int j =1 ; j<=i ; j++)
		{
			cout <<j;
		}
		for(int k = i-1 ; k>=1 ; k--)
		{
			cout<<k ;
		}
		
		cout<<endl ;
	}
	
}
