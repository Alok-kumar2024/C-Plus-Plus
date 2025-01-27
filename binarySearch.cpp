#include<iostream>
using namespace std ;

int main()
{
	int n ;
	int arr[1000] ;
	
	cout << "Enter Size Of Array : " ;
	cin >> n ;
		
	cout << "Enter All Elements Of Array : "<<endl ;
	for(int i = 0 ; i <n ; i++)
	{
		cin >> arr[i] ;
	}
	
	for(int i =0 ;i<n-1 ; i++)
	{
		for(int j = 0 ; j<n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j],arr[j+1]) ;
			}
		}
	}
	cout << "Sorted Array " <<endl ;
	for(int i =0 ; i<n ; i++)
	{
		cout << arr[i]<<" " ;
	}
		
	int key ;
	cout<<endl << "Enter Number To Search : " ;
	cin >> key ;
		
	int mid,i=0,j=n-1 ;
	while(i<=j)
	{
		mid= i + (j-i)/2 ;
		if(i>j) 
		{
			cout<<endl <<"No Such Element in Array.."<<endl ;
			break ;
		}
		if(arr[mid]==key)
		{
			cout<<endl << "Founded The Value At index : " <<mid<<endl ;
			break ;
		}
		else if(arr[mid]>key)
		{
			//Search Left Size of arr[mid]
			i = 0;
			j =mid-1 ;
		}
		else if(arr[mid] < key)
		{
			i = mid+1 ;
			j = n-1 ;
		}
		
	}
	
	
	
}
