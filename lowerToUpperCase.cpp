#include<iostream>
using namespace std ;

char convert(char alpha)
	{
		int al = (int)alpha ;
		int con = al-32 ;
		
		return (char)con ;
	}

int main()
{
	char alpha ;
	cout << "Enter Alphabed in lowerCase : " ;
	cin >> alpha ;
	
	cout << "LowerCase -> " << alpha<<endl ;
	cout << "UpperCase -> " << convert(alpha)<<endl ;
	
}
