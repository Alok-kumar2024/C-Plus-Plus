#include<iostream>
using namespace std ;

int main()
{
	
	int num ; 
	cout << "Enter Number : " ;
	cin >> num ;
        if(((num)&(num-1))==0) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
