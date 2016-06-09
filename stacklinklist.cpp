#include<iostream>
using namespace std;
struct node 
{
	int info;
	node *next;
};
node *top=NULL;
void push(int data)
{
	node *temp=new node;
	if(temp==NULL)
	{
		return;
	}
	 temp->info=data;
	if(top==NULL)
	{
	 temp->next=NULL;
	 top=temp;
	}
	else
	{
     temp->next=top;
     top=temp;
	}
}
int pop()
{
	node *temp=top;
	top=top->next;
	delete temp;
}
void display()
{
	node *p=top;
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->next;
	}
	cout<<"\n";
}
int main()
{
push(6);
push(9);
push(4);
push(7);
display();
pop();
pop();
display();
}