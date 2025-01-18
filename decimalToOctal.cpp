#include<iostream>
#include<math.h>
using namespace std ;

int main()
{
	int n,store ;
	cout << "Enter Number : " ;
	cin >> n ;
	
	store = n ;
	int octal = 0 , i = 0,num ;
	while(n!=0)
	{
		num = n%8 ;
		octal += num * pow(10,i) ;
		
		n/=8 ;
		i++ ;
	}
	
	cout << "Number -> " << store <<endl ;
	cout << "Octal -> " <<octal <<endl ;
}
