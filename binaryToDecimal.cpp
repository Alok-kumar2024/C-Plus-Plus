#include<iostream>
using namespace std ;

int main()
{
	int n ; 
	cout << "Enter Number : " ;
	cin >> n ;
	int store = n ;
	
	int num , decimal = 0 , i = 1;
	
	while(store!=0)
	{
		num = store%10 ;
		decimal += num*i ;
		store/=10 ;
		i*=2 ;
	}
	
	cout <<"Binary -> " << n <<endl ;
	cout <<"Decimal -> " <<decimal <<endl ;
}
