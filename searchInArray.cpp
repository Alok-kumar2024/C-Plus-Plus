#include<iostream>
using namespace std ;

int main()
{
	int n ; 
	cout << "Enter Size of Array : " ;
	cin >> n ;
	int arr[1000] ;
	
	int idx = -1 ;
	
	if(n >1000) 
	{
		cout << "Can't Make Array of size >1000 " <<endl ;
		return 0 ;
	}
	cout << "Enter All Element of Array : " ;
	for(int i = 0  ; i<n ;i++)
	{
		cin >> arr[i] ;
	}
	
	int target ; 
	cout << "Enter Target Number : " ;
	cin >> target ;
	
	for(int i =0 ; i<n ; i++)
	{
		if(target == arr[i] )
		{
			 idx = i ;
			break ;
		}
	}
	if(idx == -1) cout <<"No Such Number in Array.."<<endl ;
	else cout <<"The idex of that Number in Array is : " << idx <<endl ;
	
	return 0 ; 
}
