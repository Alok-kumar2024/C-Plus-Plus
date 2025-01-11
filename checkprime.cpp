#include<iostream>
using namespace std ;

int main()
{
	int prime ;
	bool check = true ;
	
	cout << "Enter Number : " ;
	cin >> prime ;
	
	
	for( int i = 2 ; i <prime ; i++)
	{
		if(prime%i == 0)
		{
			check = false ;
			break ;
		}
	}
	
	if(prime == 1) cout << prime <<" is neither Prime nor Composite. " ;

	else if(check)
	{
		cout<< prime <<" is a Prime Number. " ;
	}else cout << prime <<" is Composite Number. " ;
	
}
