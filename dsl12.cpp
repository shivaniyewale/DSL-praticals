#include<iostream>
#include<string>
#define max 100
using namespace std;

class stack
{
	public:
		int top;
		string a;
		char s[max],p[max];
		
		stack()
		{
			top=-1;
			a="nayan";
			cout<<"\n Before revsering="<<a;
		}
		void push();
		void pop();
		void display();
		void comparision();
		
		bool isfull()
		{
			return(top==max-1);
		}
		bool isempty()
		{
			return(top==-1);
		}
};

void stack::push()
{
	if(isfull())
	{
		cout<<"\n stack is full";
	}
	else
	{
		int i;
		for(i=0;i<a.length() && top<max-1;i++)
		{
			top++;
			s[top]=a[i];
		}
	}
}
void stack::pop()
{
	if(isempty())
	{
		cout<<"\nStack is empty";
	}
	else
	{
		int r=top;
		cout<<"\nAfter reversing=";
		while(r>=0)
		{
			
			p[r]=s[r];
			cout<<p[r];
			r--;
		}
	}
}
void stack::display()
{
	cout<<"\nStack is=";
	int i;
	for(i=0;i<top;i++)
	{
		cout<<" "<<s[i];
	}
}
void stack::comparision()
{
	
	int r=top;
	int f=1;
	for(int i=r;i>=r;i--)
	{
		if(s[i]!=p[i])
		{
			f=0;
		    break;
			
		}
		
	}
	if(f==1)
	{
		cout<<"\nString is palidrome";
	}
	else
	{
		cout<<"\nString is not palidrome";
	}
}
int main()
{
	stack s1;
	s1.push();
	s1.pop();
	s1.display();
	s1.comparision();
	return 0;
}
