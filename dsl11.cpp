#include<iostream>
#include<string>
#define max 100
using namespace std;
int f=-1,r=-1;
int q[max],n;

int Isempty()
{
	if(f==-1 && r==-1)
	{
		return 1;
		
	}
	else
	{
		return 0;
	}
}
int Isfull()
{
	if(((r+1)%max)==f)
	{
		return 1;
		
	}
	else
	{
		return 0;
	}
}

void add()
{
	if(Isfull())
	{
		cout<<"Order is full \n";
	}
	else
	{
		if(f==-1)
		{
			f++;
		}
		else
		{
			r=((r+1)%max);
			int e;
			cout<<"\nEnter  order=";
			cin>>e;
			q[r]=e;
			cout<<e;
			
		}
	}
}
void remove()
{
	if(Isempty())
	{
		cout<<"\nNo order";
	}
	else
	{
		cout<<"\norder dele="<<q[f];
		if(f==r)
		{
			f=r=-1;
		}
		else
		{
			f=((f+1)%max);
		}
	}
}
void display()
{
	if(Isempty())
	{
		cout<<"order is empty";
	
	}
	else
	{
		cout<<"\n orderds =";
	
		int i;
		for(i=f;i<=r;i++)
		{
			cout<<"\t"<<q[i];
		}
	}
}
int main()
{
	int choice;
	char ch;
	do
	{
		cout<<"Enter which operation you want choose";
		cout<<"\n1.add \n2remove \n3display";
		cout<<"\nEnter your choice=";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				add();
				break;
				
			case 2:
				remove();
			    break;
		    
				
				
			
			case 3:
				display();
				break;
			default:cout<<"\n invalide choice";
		
		}
		cout<<"\nDo you want to continue(y/n)=";
		cin>>ch;
    }while(ch=='y');
	return 0;
}
