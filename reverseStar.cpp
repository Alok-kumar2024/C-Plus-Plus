#include<iostream>
using namespace std ;

int main()
{
	int n ;
	cout << "Enter Number : " ;
	cin >> n ;
//	for(int i =1 ; i<=2*n ; i++) cout <<"*" ;
//	cout <<endl ;
	int sp = 2 ;
//	for(int i = 1 ; i<=n ; i++)
//	{
//		for(int j = 1 ; j<=n-i ; j++) cout <<"*" ;
//		
//		for(int k = 1 ; k<=sp ; k++) cout << " " ;
//		
//		for(int l = 1 ; l <=n-i ; l++) cout <<"*" ;
//		
//		sp+=2 ;
//		if(i<n-1)
//		cout <<"\n" ;
//	}
	
	int sp2 = 2*n ;
	for(int i = n ; i >=1 ; i--)
	{
		for(int j = 1 ; j <=n-i ; j++) cout <<"*" ;
		
		for(int k = 1 ; k<=sp2  ; k++) cout <<" " ;
		
		for(int l = 1 ; l<=n-i ; l++) cout << "*" ;
		
		sp2-=2 ;
		cout << endl ;
	}
	for(int i =1 ; i<=2*n ; i++) cout <<"*" ;
	cout <<endl ;
	
	for(int i = 1 ; i<=n ; i++)
	{
		for(int j = 1 ; j<=n-i ; j++) cout <<"*" ;
		
		for(int k = 1 ; k<=sp ; k++) cout << " " ;
		
		for(int l = 1 ; l <=n-i ; l++) cout <<"*" ;
		
		sp+=2 ;
		if(i<n-1)
		cout <<"\n" ;
	}
	cout <<endl ;
}
