#include<iostream>
using namespace std ;

int main()
{
	int n ;
	cout << "Enter Number : " ;
	cin >> n ;
	int store = n ,i=0;
	
	while(store!=0)
	{
		store/=10 ;
		i++ ;
	}
	store = n ;
	
	int last , squareSum = 0,sum ;
	while(store!=0)
	{
		sum = 1;
		last = store%10 ;
		for(int j =1 ; j <=i ;j++)
		{
			sum*=last ; 
		}
		squareSum += sum ;
		store/=10 ;
	}
	
	if(n==squareSum)
		cout <<"The Number " << n <<" is a ArmStrong Number."<<endl ;
	else
		cout <<"The Number " <<n <<" is not a ArmStrong Number." <<endl ;
}
