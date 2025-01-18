#include<iostream>
using namespace std ;

int trailingZeros(int n)
	{
		int count =0 ;
		while(n!=0)
		{
			count=count + (n/5) ;
			n/=5 ;
		}
		return count ;
	}

int main()
{
	int num ;
	cout << "Enter Number : " ;
	cin >> num ;
	
	int zeros = trailingZeros(num) ;
	
	cout << "Trailing Zeros in Factorial of Number " <<num<<" is " << zeros<<endl;
	
	return 0 ;
	
}
