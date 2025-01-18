#include<iostream>
#include<math.h>
using namespace std ;

// typedef struct hexa
//	{
//		int
//	},hexa;

int main()
{
	int n,store ;
	cout << "Enter Number : " ;
	cin >> n ;
	store = n ;
	int i=0,num;
	char hexa[200] ;
	while(store!=0)
	{
		num = store%16 ;
		
		switch(num)
		{
			case 1 : hexa[i] = '1' ;
					break ;
			case 2 : hexa[i] = '2' ;
					break ;
			case 3 : hexa[i] = '3' ;
					break ;
			case 4 : hexa[i] = '4' ;
					break ;
			case 5 : hexa[i] = '5' ;
					break ;
			case 6 : hexa[i] = '6' ;
					break ;
			case 7 : hexa[i] = '7' ;
					break ;
			case 8 : hexa[i] = '8' ;
					break ;
			case 9 : hexa[i] = '9' ;
					break ;
			case 10 : hexa[i] = 'A' ;
					break ;
			
			case 11 : hexa[i] = 'B' ;
					break ;
			
			case 12 : hexa[i] = 'C' ;
					break ;
			
			case 13 : hexa[i] = 'D' ;
					break ; 
			
			case 14 : hexa[i] = 'E' ;
					break ;
			
			case 15 : hexa[i] = 'F' ;
					break ;
			

		}
		store/=16 ;
		i++ ;
	}
	
	cout << "Deciaml -> " << n <<endl ;
	cout <<"HexaDecimal -> " ;
	for(int j = i-1 ; j>=0;j--)
	{
		cout <<hexa[j] ;
	}
	
	cout << endl ;
}
