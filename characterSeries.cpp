#include<iostream>
using namespace std ;

int main()
{
	char alpha ;
	cout << "Enter an Alphabed : " ;
	cin >> alpha ;
	int check = 0;
	
	for(char i ='A' ; i <= 'Z' ; i++)
	{
		if(alpha == i)
		{
			check = 1 ;
		}
	}
		
	for(char i ='a' ; i <= 'z' ; i++)
	{
		if(alpha == i)
		{
			check = 2 ;
		}
	}
	
	if(check == 0) cout << "Not a valid Alphabed ."<<endl ; 
	else if(check ==2)
	{	
		for(char i = 'a' ; i <= alpha ; i ++)
		{
			for(char j = 'a' ; j <= i ; j++) cout << i ;
		
			cout << endl ;
		}
	}
	
	else if(check == 1)
	{
	
		for(char i = 'A' ; i <= alpha ; i ++)
		{
			for(char j = 'A' ; j <= i ; j++) cout << i ;
		
			cout << endl ;
		
		}
	}
}
