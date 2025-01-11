#include<iostream>
using namespace std ;

int main()
{
	int endnum ;
	cout << "Enter Number : " ;
	cin >>  endnum ;
	int sum =0;
	for(int i =1 ; i <=endnum ; i++)
	{
		sum += i ;
	}

	cout <<"Sum of first " <<endnum <<" Number is = " <<sum <<endl ;
}
