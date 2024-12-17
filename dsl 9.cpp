#include<iostream>
#include<string>
#define max 100
using namespace std;
int f=0,r=-1;
int q[max],n;


int Isempty()
{
	if(f>r)
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
	if(r==max-1)
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
		cout<<"job is full";
	}
	else
	{
		int e;
		r++;
		cout<<"\nEnter job queue=";
		cin>>e;
		q[r]=e;
		cout<<"job is\t"<<e<<"\tAdded";
		
	}
}
void remove()
{
	if(Isempty())
	{
		cout<<"job is empty";
	}
	else
	{
		cout<<q[f]<<"is delete";
		f++;
	}
}
void display()
{
	if(Isempty())
	{
		cout<<"job is empty";
	
	}
	else
	{
		cout<<"\n job is Queue=";
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
		cout<<"\n1.add\n2remove\n3display";
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
