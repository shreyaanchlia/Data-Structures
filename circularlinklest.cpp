#include<bits/stdc++.h>
using namespace std;
struct node
{
	node *next;
	int info;
};
node *head=NULL;
node *tail=NULL;
void insert_beg(int data)
{
	node *temp=new node;
	if(temp==NULL)
		return;
	temp->info=data;
	if(head==NULL && tail==NULL)
	{
     temp->next=NULL;
     head=tail=temp;
	}
	else
	{
     temp->next=head;
     tail->next=temp;
     head=temp;
	}
}
void traverse()
{
	node *p=head;
	do
	{
		cout<<p->info<<" ";
		p=p->next;
	}
	while(p!=head);
}
int main()
{
insert_beg(6);
insert_beg(3);
insert_beg(89);
insert_beg(78);
insert_beg(45);
traverse();
}