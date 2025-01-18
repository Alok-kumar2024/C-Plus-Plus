#include<iostream>
using namespace std ;

int main()
{
	int num ;
	cout << "Enter Number : " ;
	cin >> num ;
	int n ;
	bool check = true ;
	while(num!=1)
	{
		n = num%2;
		if(n == 0)
		{
			check = true ;
		}else{
			check = false ;
			break ;
		}
		
		num/=2;
	}
	
	if(check)
	{
		cout <<"Yes" ;
	}else cout << "No" ;
	cout <<endl ;

return 0 ;
	
	
}
