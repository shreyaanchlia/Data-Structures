#include<iostream>
using namespace std;
struct node
{
	int info;
	node *next;
};
node *front=NULL;
node *rear= NULL;
void enqueue(int data)
{
	node *temp=new node;
	if(temp==NULL)
		return;
	temp->info=data;
	temp->next=NULL;
	if(front==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
void dequeue()
{
	node *temp=front;
	front=front->next;
	delete temp;
}
void traverse()
{
	node *p=front;
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->next;
	}
	cout<<endl;
}
int main()
{
enqueue(10);
enqueue(23);
enqueue(8);
traverse();
dequeue();
traverse();
}