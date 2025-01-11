#include<iostream>
using namespace std ;

int main()
{
	int a;
	cout << "Enter Number : " ;
	cin >> a ;
	char oper ;
	cout << "Enter Operator : " ;
	cin >> oper ;
	int b , c , d , e ;
	int sum = a;
	while(oper!= '=')
	{
		switch(oper)
		{
		
			case '+' :
				cout << "Enter Number : " ;
				cin >> b ;
				sum += b ;
				break ;

			case '-' :
				cout << "Enter Number : " ;
				cin >> c ;
				sum -= c ;
				break ;
		
			case '*' :
				cout << "Enter Number : " ;
				cin >> d ;
				sum *=d ;
				break ;
			
			case '/' : 
				cout << "Enter Number : " ;
				cin >> e ;
				if(e == 0){ cout << "Error :  Number Can't be 0\n" ;}
				else{ sum /= e ;}
				break ;
			default :
				cout << " Operator can only be '+' , '-' , '*' ,'/' \n " ;	
		
		}
		
		if(e == 0) break ;
		
		cout << "Enter Operator : " ;
		cin >> oper ;

	}

	cout << "The sum of numbers is : " << sum <<"\n" ;
}
