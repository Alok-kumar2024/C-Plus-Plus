#include<iostream>
using namespace std ;

typedef struct node
        {
                int data ;
                struct node* link ;
        }node;


void InsertNode(node** HEAD,int value)
        {
               // int val ;
                //cout << "Enter Value : " ;
                //cin >> val ;
                //node* newnode = (node*)malloc(sizeof(node)) ;
                node* newnode = new node;
                newnode->data = value;
                newnode->link = *HEAD;
                *HEAD = newnode;
		
           
		
		
	//	node* temp1 = HEAD ;
          //      cout<<endl ;
            //    while(temp1 != NULL)
              //  {
                //        cout<< temp1->data << "-> " ;
                  //      temp = temp1->link ;
               // }
                //cout <<"NULL" <<endl<<endl ;

		return ;
        }

void createLinkedList()
        {
	// mmmm 
        }

void InsertEndNode(node** TAIL,int value)
		{
			node* temp = *TAIL;
			
			node* endnode = new node;
			
			endnode->data = value;
			endnode->link = NULL;
			
			//while(temp->link != NULL) temp = temp->link ;
			//temp->link = endnode;
			
			temp->link = endnode;
			*TAIL = endnode;
			
			return;
			
			
			
		}

void showLinkedList(node* HEAD)
        {
                node* temp = HEAD ;
		cout<<endl ;
                while(temp != NULL)
                {
                        cout<< temp->data << "-> " ;
                        temp = temp->link ;
                }
		cout <<"NULL" <<endl<<endl ;
        }

int main()
{
        node* head = NULL ;
	node* tail = NULL ;

        //node* newnode = (node*)malloc(sizeof(node)) ;
        node* newnode = new node ;
        newnode->data = 10 ;
        
	node* newnode2 = (node*)malloc(sizeof(node)) ;
        newnode2->data = 20 ;
        newnode->link = newnode2 ;
        newnode2->link = NULL ;
        
        head = newnode ;
	tail = newnode2 ;

        int choice,val ;

        while(true)
        {
                cout <<"Choices :" <<endl ;
		cout<<"1.Show LinkedList"<<endl;
		cout <<"2.Insert At begining of the LinkedList."<<endl ;
		cout <<"3.Insert At End of the LinkedList."<<endl ;
		cout <<"4.Exit"<<endl ;

                cout <<"Enter Your Choice : " ;
                cin >> choice ;

                switch(choice)
                {
                        case 1 : showLinkedList(head) ;
                                break;

                        case 2 :
				cout <<"Enter Number : " ;
				cin >>val ;
				InsertNode(&head,val) ;
                                break ;
			
			case 3 : 
				cout <<"Enter Number : ";
				cin >>val;
				// InsertEndNode(&head,val);
				InsertEndNode(&tail,val);
				break;

                        case 4 : break ;

                       default : cout << "No Match Found for Entered Choice." <<endl ;
                                break ;

                }

                if(choice==4 || choice>4 || choice<1)
                {
                        cout << "Quiting The Process"<<endl ;
                        break ;
                }


        }
}

