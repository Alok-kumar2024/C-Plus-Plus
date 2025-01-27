#include<iostream>
using namespace std ;

int main()
{
	int n ;
	cout << "Enter Size Of Array : " ;
	cin >> n ;
	
	int arr[1000] ;
		
	cout << "Enter All Elements of Array : "<<endl ;
	for(int i =0 ; i<n ; i++)
	{
		cin >> arr[i] ;
	}
	cout <<endl <<"Array Before Sorting.."<<endl ;
	for(int i=0 ; i<n ; i++)
	{
		cout <<arr[i]<<" " ;
	}
	
	bool check = true ;
	
	for(int i = 1 ; i<n ; i++)
	{
		for(int j = i  ; j> 0 ; j--)
		{
			if(arr[j]<arr[j-1])
			{
				swap(arr[j],arr[j-1]) ;
				check = false ;
			}
		  	if(check) break ;
		}
	}
	
	cout << endl <<"Array After Sorting.."<<endl ;
	
	for(int i = 0 ; i<n ; i++)
	{
		cout <<arr[i] <<" " ;
	}
	cout <<endl ;
}

