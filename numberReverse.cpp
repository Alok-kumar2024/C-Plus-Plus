#include<iostream>
using namespace std ;

int main()
{
	int num ; 
	cout <<"Enter number : " ;
	cin >> num ;
	int key ;
	for(int i =1 ; i <=num ; i++)
	{
		key = i ;
		for(int j =1 ; j <=i;j++)
		{
			cout << key ;
			key -- ;
		}
		cout<<endl ;
	}
	
}
