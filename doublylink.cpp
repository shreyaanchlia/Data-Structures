#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct node 
{
	node*prev;
	node*next;
	int info;
};
node *start=NULL;
void insert_beg(int data)
{
	node *temp=new node;
	if(temp==NULL)
	{
		cout<<"overflow"<<endl;
		return ;
	}

	temp->info=data;
	if(start==NULL)
	{
		temp->next=NULL;
		temp->prev=NULL;
		start=temp;
	}
	else
	{
	temp->next=start;
	temp->prev=NULL;
	start->prev=temp;
	start=temp;
   }
}
void insert_end(int data)
{
	node *temp=new node;
	if(temp==NULL)
	{
		cout<<"overflow"<<endl;
		return;
	}
	temp->info=data;
	if(start==NULL)
	{
		temp->next=NULL;
		temp->prev=NULL;
		start=temp;
	}
	else
	{
       node *p=start;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		temp->prev=p;
		temp->next=NULL;
		p->next=temp;
	}
}
void insert_after(int element,int data)
{
	node *temp=new node;
	node *p=start;
	while(p->info!=element)
	{
		p=p->next;
	}
	temp->info=data;
	temp->next=p->next;
	temp->prev=p;
	p->next=temp;
}
void insert_before(int pos,int data)
{
	if(pos==1)
	{
		insert_beg(data);
		return ;
	}
	node *p=start;
	int c=1;
	while(p!=NULL && c!=pos-1)
	{ 
		p=p->next;
		c++;
	}
	node *temp=new node;
	temp->info=data;
	temp->next=p->next;
	temp->prev=p;
	p->next=temp;
}
void traverse_forward()
{
 node *p=start;
 cout<<"traverse in forward"<<endl;
 while(p!=NULL)
 {
 	cout<<p->info<<" ";
 	p=p->next;
 }
 cout<<endl;
}
void traverse_backward()
{
	node *p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	cout<<"traverse in backward"<<endl;	
	while(p!= NULL)
	{
		cout<<p->info<<" ";
		p=p->prev;
	}
	cout<<endl;
}
void reverse()
{
	node *current=start;
	node *result=NULL;
	node *next;
	while(current!=NULL)
	{
		result=current->prev;
		current->prev=current->next;
		current->next=result;
		current=current->prev;
	}
	start=result;

}
node *start1;
int main()
{
	insert_beg(6);
	insert_end(4);
	insert_beg(7);
	insert_end(19);
	insert_beg(9);
	insert_end(3);
	insert_after(7,11);
	insert_before(6,56);
	traverse_forward();
	reverse();
	traverse_backward();
	traverse_forward();
return 0;
}