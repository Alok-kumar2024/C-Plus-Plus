#include<iostream>
using namespace std ;

int main()
{
	int a , b ;
	cout << "Enter The Position of Bishop : " ;
	cin >> a >> b ;
	
	int totalsteps = 0 ;
	
	for(int i =a,j=b;i> 1 && j> 1 ; i-- , j--) totalsteps += 1 ;
	
	for(int i =a,j=b;i< 8 && j> 1 ; i++ , j--) totalsteps += 1 ;
	
	for(int i =a,j=b;i> 1 && j< 8 ; i-- , j++) totalsteps += 1 ;
	
	for(int i =a,j=b;i< 8 && j< 8 ; i++ , j++) totalsteps += 1 ;
	
	cout <<"Total steps are : " << totalsteps <<endl ;
}
