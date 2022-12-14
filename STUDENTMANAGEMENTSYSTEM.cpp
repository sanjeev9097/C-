                     // STUDENT MANAGEMENT SYSTEM
                     
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include <windows.h>
using namespace std;

class Node
{
	public:
		int roll_no;
		string name;
		float marks,percentage;
		Node *next;
};

class Linked_List{
	public:
		Node *head = NULL;
		
		//INSERT FUNCTION 
		
		void insert()
		{
			int r;
			string n;
			float m;
			cout<<"\n\nEnter Your Roll No :-";
			cin>>r;
			cout<<"\n\nEnter Your Name :-";
			cin>>n;
			cout<<"\n\nEnter Your Marks :-";
			cin>>m;
			
		                      	//CREATE A NEW NODE
			
			Node *new_node =new Node;
			new_node->roll_no = r;
			new_node->name=n;
			new_node->marks=m;
			new_node->percentage=m/100*100;
			new_node->next=NULL;
			
			if(head==NULL)
			{
				head = new_node;
			}
			else
			{
				Node *ptr=head;
				while(ptr->next!=NULL)
				{
					ptr = ptr->next;
				}
				ptr->next=new_node;
				
			}
			cout<<"\n\n\nNew Node Inserted Succesfully";
		}
		
		void Search()
		{
			if(head==NULL)
			{
				cout<<"\n\nRecord Is Empty";
			}
			else
			{
				//Record Search Based on Roll no 
				
				int Roll,found=0;
				cout<<"\n\nEnter The Roll No To Be Searched :-";
		        cin>>Roll;	
				Node *ptr = head;
				while(ptr!=NULL)
				{
					if(ptr->roll_no==Roll)
					{
						
						cout<<"\n\nRoll No :-"<<ptr->roll_no;
						cout<<"\n\nName :-"<<ptr->name;
						cout<<"\n\nMarks :-"<<ptr->marks;
						cout<<"\n\nPercentage :-"<<ptr->percentage;
						found++;
					}   
					 ptr=ptr->next;
					 	
				}
				if(found==0)
				{
					cout<<"\n\n Search Roll No."<<Roll<<"\t\tCan't Found...";
				}
				
			}
		}
		
		void Count()
		{
			if(head==NULL)
			{
				cout<<"\n\nRecord Is Empty.....";
			}
			else
			{
				int c=0;
				Node *ptr = head;
				while(ptr!=NULL)
				{
					c++;
					ptr=ptr->next;
				}
				cout<<"\n\n Total No. Of Records :-"<<c;
				
			}
		}
		
		void Update()
		{
			if(head==NULL)
			{
				cout<<"\n\nRecord Is Empty";
			}
			else
			{
				//Update Record Based on Roll no 
				
				int Roll,found=0;
				cout<<"\n\nEnter The Roll No To Be Update :-";
		        cin>>Roll;	
				Node *ptr = head;
				while(ptr!=NULL)
				{
					if(ptr->roll_no==Roll)
					{
						cout<<"\n\nEnter Your Roll No :-";
			            cin>>ptr->roll_no;
			            cout<<"\n\nEnter Your Name :-";
			            cin>>ptr->name;
			            cout<<"\n\nEnter Your Marks :-";
		            	cin>>ptr->marks;
		            	ptr->percentage=ptr->marks/100*100;
						
						
						found++;
					}   
					 ptr=ptr->next;
					 	
				}
				if(found==0)
				{
					cout<<"\n\n Roll No is not Present In The Record";
				}
				
			}
		}
		void Delete()
		{
			int r,found=0;
			if(head==NULL)
			{
				cout<<"\n\nRecord Is Empty";
			}
			else
			{
				cout<<"\n\nEnter The Roll No To Be Deleted:-";
				cin>>r;
			    if(r=head->roll_no)
			    {
			    	Node *ptr=head;
			    	head=head->next;
			    	cout<<"\n\nRecord Deleted Successfully";
			    	delete ptr;
				}
				else
				{
					Node *pre=head;
					Node *ptr=head->next;
					while(ptr!=NULL)
					{
						pre->next=ptr->next;
						cout<<"\n\nRecord Deleted Successfully....";
						found++;
						delete ptr;
						break;
					}
					pre=ptr;
					ptr=ptr->next;
				}		
			}
			if(found==0)
			{
				cout<<"\n\nRecord Not Present...";
			}
			
		}
		
		void Show()
		{
			Node *ptr=head;
			if(head==NULL)
			{
				cout<<"\n\nRecord Is Not Present....";
			}
			else
			{
				while(ptr!=NULL)
				{
					cout<<"\n\nRoll No :-"<<ptr->roll_no;
					cout<<"\n\nName :-"<<ptr->name;
					cout<<"\n\nMarks :-"<<ptr->marks;
					cout<<"\n\nPercentage :-"<<ptr->percentage;
					ptr=ptr->next;
				}
				
			}
		}
		
};
int main()
{
	Linked_List obj;
	
	p:
    system("CLS");
    
    system("Color 0A");
	int choice;
	
	
	cout<<"\n                                  STUDENT MANAGEMENT SYSTEM                                  ";
	
	cout<<"\n\n                   1. Insert Record";
	cout<<"\n\n                   2. Search Record";
	cout<<"\n\n                   3. Count Record" ;
	cout<<"\n\n                   4. Update Record";
	cout<<"\n\n                   5. Delete Record";
	cout<<"\n\n                   6. Show All Record";
	cout<<"\n\n                   7. Exit"          ;
	cout<<"\n\n\n                               Enter Your Choice :- ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		        system("CLS");
		        obj.insert();
		        break;
		case 2:
		        system("CLS");
		        obj.Search();
		        break;
		case 3:
		        system("CLS");
		        obj.Count();
		        break;        
		case 4:
		        system("CLS");
		        obj.Update();
		        break;                
		case 5:
		        system("CLS");
		        obj.Delete();
		        break;
		case 6:
		        system("CLS");
		        obj.Show();
		        break; 
	    case 7:
		        exit(0);
		        break;	
	    default:
		        cout<<"\n\nInvalid Choice ... Please Try Again";					       
	}
	getch();
	goto p;
	return 0;
}





















