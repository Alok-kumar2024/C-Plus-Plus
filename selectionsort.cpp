#include<iostream>
using namespace std ;

int main()
{
	int n ;
	cout << "Enter Size Of Array : " ;
	cin >> n ;
	
	int arr[1000];
	
	cout <<"Enter All Elements of Array -> " << endl ;
	for(int i = 0 ; i <n ; i++)
		cin >> arr[i] ;
	
	cout << "UnSorted Array : " <<endl ;
	for(int i =0 ; i<n ; i++)
		cout << arr[i] <<" " ;
	
	int temp ,change;
	
	for(int i = 0 ; i<n-1 ; i++)
	{
		for(int j = i ; j<n ; j++)
		{
			if(arr[j]<arr[i])
			{
				swap(arr[j] , arr[i]) ;
				
			} 
				
		}
	}
	
	cout << "Sorted Array -> " <<endl ;
	
	for(int i =0 ; i <n ; i++)
		cout << arr[i] << " " ;


}
