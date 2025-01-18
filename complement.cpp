#include<iostream>
using namespace std ;

int main()
{
	int num ;
	cout << "Enter Number : " ;
	cin >> num ;
	int store = num ;
	
	int n , i=1,complement =0 ;
	while(store!=0)
	{
		n = (store%2)^1 ;
		complement +=n*i ;
		store/=2 ;
		i*=2 ;
	}
	
	cout << "Number -> " <<num <<endl;
	cout <<"Complement -> " <<complement<<endl ;
}
