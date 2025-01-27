#include<iostream>
using namespace std ;

int main()
{
	int n ;
	cout << "Enter the size of Array : " ;
	cin >> n ;
	
	int arr[1000] ;
	
	cout<<"Enter All Elements of Array : "<<endl ;
	for(int i =0 ;i <n ; i++)
	{
		cin >> arr[i] ;
	}
	cout <<"Array Before Sorting " <<endl ;
	bool check = true ;
	for(int i =0 ;i <n ; i++)
	{
		cout << arr[i]<<" " ;
	}
	
	for(int i = 0 ; i<n-1 ; i++)
	{
		for(int j =0 ; j<n-i ; j++)
		{
			if(arr[j]>arr[j+1])
			{
				check = false ;
				swap(arr[j],arr[j+1]) ;
			}
		}
		
		if(check) break ;
	}
	
	cout<<endl<<"Array After Sorting " <<endl ;
	
	for(int i = 0 ;i<n ; i++)
	{
		cout << arr[i]<<" " ;
	}
	
	cout << endl ;
}
