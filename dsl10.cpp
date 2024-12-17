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
	if(f==0 && r==max-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void addR()
{
	if(Isfull())
	{
		cout<<"job is full";
	}
	else
	{
		if(r==max-1)
		{
			cout<<"\nInsertion from front end";
		}
		else
		{
			if(f==-1)
			{
				f=0;
			}
			else
			{
				int e;
				r++;
				cout<<"\nEnter job=";
				cin>>e;
				q[r]=e;
			}
		}
	}
}
void removeR()
{
	if(Isempty())
	{
		cout<<"job is empty";
	}
	else
	{
		cout<<q[r]<<"\nJob is deleted";
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else
		{
			
			--r;
		}
	}
}
void addF()
{
	if(Isfull())
	{
		cout<<"job is full";
	}
	else
	{
		int e; 
		if(f>r)
		{
			f--;
			q[f]=e;
		}
		else
		{
	
		
		if(f==0)
		{
			cout<<"\nInsertion from other end";
		}
		else
		{
			f=0;
			int e;
			cout<<"\nEnter job=";
			cin>>e;
			q[f]=e;
		}
	}
	    
	}
	
}
void removeF()
{
	if(Isempty())
	{
		cout<<"\nJob is empty";
	}
	else
	{
		cout<<q[f]<<"is deleted";
		f++;
	}
}
void display()
{
	if(Isempty())
	{
		cout<<"\nJob is empty";
		
	}
	else
	{
		int i;
		for(i=f;i<=r;i++)
		{
			cout<<"Job is=";
			cout<<" "<<q[i];
		}
	}
}
int main()
{
	int choice;
	char ch;
	do
	{
	
	cout<<"\n1.addF \n2.addR \n3.removeF \n4.removeR \n5.display";
	cout<<"\nEnter your choice=";
	cin>>choice;
	switch(choice)
	{
		case 1:
			addF();
			break;
			
		case 2:
			addR();
			break;
			
		case 3:
			removeF();
			break;
			
		case 4:
			removeR();
			break;
			
		case 5:
			display();
			break;
			
		default:cout<<"\nInvalide choice";
			
	}
	
	cout<<"\nDo you want to continue(y/n)=";
	cin>>ch;
    }while(ch=='y');
    return 0;
}
