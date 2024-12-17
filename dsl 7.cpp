#include<iostream>
#include<string>
using namespace std;
int count;
struct node
{
	int prn;
	string name;
	node* next;
};
class linklist
{
	public:
		node* head;
		node* tail;
		
		linklist()
		{
			head=NULL;
			tail=head;
		}
		void insertion();
		void deletion();
		void display();
		
};
void linklist::insertion()
{
	node* nnode;
	int choice;
	char ch,ch1;
	do
	{
		cout<<"\n1.insert intermeidate\n 2.insert head\n 3.insert tail";
		cout<<"\nEnter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				do
				{
				
				node* nnode;
				nnode=new node;
				nnode->next=NULL;
				cout<<"\nEnter PRN= ";
				cin>>nnode->prn;
				cout<<"\nEnter name=";
				cin>>nnode->name;
				if(head==NULL && tail==NULL)
				{
					head=tail=nnode;
				}
				else
				{
					tail->next=nnode;
					tail=nnode;
				}
				count++;
				cout<<"\nDo you want continue insertiob of intermediate node (y/n)=";
				cin>>ch;
			    }while(ch=='y');
			    break;
			case 2:
				
				nnode=new node;
				nnode->next=NULL;
				cout<<"\nEnter PRN= ";
				cin>>nnode->prn;
				cout<<"\nEnter name=";
				cin>>nnode->name;
				if(head==NULL && tail==NULL)
				{
					head=tail=nnode;
				}
				else
				{
					nnode->next=head;
					head=nnode;
				}
				count++;
				break;
			case 3:
			
				nnode=new node;
				nnode->next=NULL;
				cout<<"\nEnter PRN= ";
				cin>>nnode->prn;
				cout<<"\nEnter name=";
				cin>>nnode->name;
				if(head==NULL && tail==NULL)
				{
					head=tail=nnode;
				}
				else
				{
					tail->next=nnode;
					tail=nnode;
				}
				count++;
				break;
				
				
				
				
				
		}
		cout<<"\nDo you want continue all any insertion (y/n)=";
		cin>>ch1;
		
	}while(ch1=='y');
}
void linklist::deletion()
{
	int choice,key;
	char ch,ch1;
	node* temp;
	node* temp1;
	do
	{
		cout<<"\n Enter what u want delete=";
		cout<<"1.deletion insertion\n 2.deletion head\n 3.deletion of tail\n 4.No deletion";
		cout<<"\nEnter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				temp=head;
				head=head->next;
				if(head==NULL)
				{
					tail=NULL;
				}
				delete temp;
				count--;
				break;
			case 2:
				cout<<"\nEnter the prn you want delete=";
				cin>>key;
				temp=head;
				while((temp->next)->prn!=key)
				{
					temp=temp->next;
				}
				if(temp->prn=key)
				{
					head=temp->next;
					if(head=NULL)
					{
						tail=NULL;
					}
					delete temp;
					count--;
					break;
				}
				temp1=(temp->next)->next;
				temp->next=temp1;
				
				delete temp->next;
				count--;
				break;
				
			case 3:
				temp=head;
				while(temp->next!=tail)
				{
					temp=temp->next;
				}
				if(temp->next==NULL)
				{
					head=tail=NULL;
					delete temp;
					count--;
					break;
				}
				temp1=tail;
				tail=temp;
				delete temp1;
				count--;
				tail->next=NULL;
				break;
				
			case 4:
				cout<<"Existe deletion=";
				return;
		}
		if(choice!=4)
		{
			cout<<"\nDo you want continue(y/n)=";
			cin>>ch;
		}
	}while(ch=='y');
}
void linklist::display()
{
	node* temp;
	temp=head;
	while(temp!=NULL)
	{
		cout<<"\nPRN NUMber="<<temp->prn;
	    cout<<"\nName is="<<temp->name;
	    temp=temp->next;
		
	}
	
}
linklist conacatenation(linklist a, linklist b)
{
	a.tail->next=b.head;
	return a;
}
int main()
{
	linklist l1,l2;
	cout<<"\nEnter the 1st linklist=";
	l1.insertion();
	cout<<"\nThe 1st linklist is=";
	l1.display();
	cout<<"\n";
	
	l1.deletion();
	cout<<"\nAfter deletion=";
	l1.display();
	
	
	cout<<"\nEnter the 2nd linklist=";
	l2.insertion();
	cout<<"\nThe 2nd linklist is=";
	l2.display();
	cout<<"\n";
	
	l2.deletion();
	cout<<"\nAfter deletion=";
	l2.display();
	return 0;
}
