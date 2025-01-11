#include<iostream>
using namespace std ;

int main()
{
	int num ;
	cout << "Enter Number : " ;
	cin >> num ;
	
	int fact = 1;
	
	for(int numb=num ; numb >0 ; numb--)
	{
		fact*=numb ;
	}

	cout <<"Factorial of " <<num<<" is = " << fact<<endl ;
}
