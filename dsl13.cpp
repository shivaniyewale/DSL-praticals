#include<iostream>
using namespace std;
#include<string>
#define size 10
class stack
{
	public:
		int top;
		char s[size];
		stack()
		{
			top=-1;
		}
		void push();
		char pop();
		int isfull();
		int isempty();
};
int stack::isfull()
{
	if(top==size)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int stack::isempty()
{
	if(top=-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void stack::push()
{
	char x;
	top=top+1;
	s[top]=x;
}
char stack::pop()
{
	char a;
	a=s[top];
	top=top-1;
	return a;
}
int main()
{
	stack s1;
	char ch,exp[size];
	int i;
	cout<<"\nCheck parenthesis";
	cout<<"\nEnter the parenthesis=";
	cin>>exp;
    if((exp[0]==')')||(exp[0]==']')||(exp[0]=='}'))
	{
		cout<<"\nINvalide expression";
		return 0;
	}
	else
	{
		while(exp[i]!='\0')
		{
			ch=exp[i];
			switch(ch)
			{
				case '{':s1.push();
					break;
				case '[':
					s1.push();
					break;
				case '(':
					s1.push();
					break;
				case '}':
					s1.pop();
					break;
				case ']':
					s1.pop();
					break;
				case ')':
					s1.pop();
					break;
				
					
				
			}
			i=i+1;
		}
	}
	if(s1.isempty())
	{
		cout<<"\nExpression is parenthesis";
	}
	else
	{
		cout<<"\nExpression is not parenthesis";
	}
	return 0;
}

