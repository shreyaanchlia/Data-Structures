#include<bits/stdc++.h>
using namespace std;
struct node
{
	int info;
	node *next;
};
node *rear= NULL;
node *front=NULL;
void insert(int data)
{
	node *temp=new node;
	if(temp==NULL)
		{
			cout<<"overflow"<<endl;
			return ;
		}
	temp->info=data;
	if(front==NULL)
	{
		temp->next=NULL;
		rear=front=temp;
	}
	else
	{
		temp->next=NULL;
		rear->next=temp;
		rear=temp;
	}
}
void del()
{
	if(front==NULL)
	{
		cout<<"underflow"<<endl;
		return;
	}
	node *p=front;
	front=front->next;
	delete p;
}
void display()
{
node *p=front;
while(p!=NULL)
{
	cout<<p->info<<" ";
	p=p->next;
}
}
int main()
{
insert(5);
insert(4);
insert(7);
insert(9);
insert(6);
del();
display();
}