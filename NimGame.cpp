#include<iostream>
using namespace std ;

int main()
{
	int n ;
	cout << "Enter Number of stones : " ;
	cin >> n ;
	
	int count = 0, n1 , n2 ;
	bool check1=false , check2=false ;
	int cn1=0 , cn2=0 ;
	while(count< n  )
	{
		
		cout << "Enter Number(1-3)-user1 : " ;
		cin >> n1 ;
		if(n1>3)
			{
			 	cout <<endl<< "Error : User 1 Enter Number Greater than 3 . " <<endl ;
				cout << "User 1 Cheated... " <<endl ;
				check1 = false ;
				 break ;
			}
		
		count+= n1 ;
		if(count>=n) 
			{
				check1 = true ;
				break ;
			
			}
		cout <<"Enter Number(1-3)-user2 : " ;
		cin >> n2 ;
		count += n2 ;
		if(n2>3)
			{
				cout <<endl<<"Error : User 2 Enter Number Greater Than 3 ." <<endl ;
				cout << "User 2 Cheated... " <<endl ;
				check2 = false ;
				break ;
			}
		else if(count>=n)
		{
			check2 = true ;
			break ;
		}
	}
	cout <<endl ;
	
	if(check1) cout << "User 1 Wins." <<endl ;
//	else if(!check1) cout << "User 1 Cheated. " <<endl ;
	else if(check2) cout << "User 2 Wins." <<endl ;
//	else if(!check2) cout << "User 2 Cheated. " <<endl ;
}
