#include<iostream>
using namespace std;
#define max 6
int stack[max];
int top=-1;
void push(int data)
{
	if(top==max-1)
	{
		cout<<"overflow"<<endl;
		return ;
	}
stack[++top]=data;
}
int pop()
{
	if(top<0)
	{
		cout<<"underflow"<<endl;
		return 0;
	}
	int x=stack[top--];
}
int peek()
{
	return stack[top];
}
int main()
{
	push(5);
	push(9);
	push(7);
	cout<<peek()<<endl;
	push(8);
	cout<<peek()<<endl;
	pop();
	cout<<peek()<<endl;
return 0;
}