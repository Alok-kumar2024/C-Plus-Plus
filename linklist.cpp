#include<iostream>
using namespace std ;

typedef struct Node
	{
		int data ;
		struct Node* next ;
	}node;

int main()
{
	node* head , *temp ;
	node*newnode1 = (node*)malloc(sizeof(node)) ;
	node* newnode2 = (node*)malloc(sizeof(node)) ;
	
	head = newnode1 ;
	
	newnode1->data = 10 ;
	newnode1->next = newnode2 ;
	
	newnode2->data = 20 ;
	newnode2 = NULL ;
	
	temp = head ;
	
	while(temp !=NULL)
	{
		cout <<temp->data <<"->" ;
		
		temp = temp->next ;
//if(temp == NULL) cout << temp->next ;
	}
	cout << "NULL" <<endl ;
}
