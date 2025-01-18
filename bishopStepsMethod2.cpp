#include<iostream>
using namespace std ;

int min(int a , int b )
	{
		if(a>b) return b ;
		else return a ;
		
	}

int main()
{
	int a , b ;
	cout <<"Enter Position of Bishop[x,y] : " ;
	cin >> a >> b ;
	
	int totalsteps = 0 ;
	
	totalsteps += min(8-a,8-b) + min(8-a , b-1) + min(a-1 , 8-b) + min(a-1 , b-1) ;
	
	cout << "Total Number Of steps : " <<totalsteps<<endl ;
	
	return 0 ;
	
}
