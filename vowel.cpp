#include<iostream>

int main()
{
	char name ;
	std::cout << "Enter Character : " ;
	std::cin >> name ;
	
	if(name == 'a' || name == 'A' || name == 'i' || name == 'I' || name == 'e' || name == 'E' || name == 'o' || name == 'O' || name == 'u' || name == 'U' )
	std::cout << "Character is Vowel. "<<std::endl ;
	
	else std::cout << "Character is consonant."<<std::endl ;
}
