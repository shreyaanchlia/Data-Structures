#include<bits/stdc++.h>
using namespace std;
struct node
{
	int info;
	node *next;
};
void swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}
node *start=NULL;
void insert_beg(int data)
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
		start=temp;
	}
	else
	{
		temp->next=start;
		start=temp;
	}
}
void insert_end(int  data)
{
	node* temp=new node;
	if(temp==NULL)
	{
		cout<<"overflow"<<endl;
		return ;
	}
	   temp->info=data;
		node *p=start;
	if(start==NULL)
	{
		temp->next=NULL;
		start=temp;
	}

		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
		temp->next=NULL;
}
void insert_after(int data,int k)
{
	node *p,*temp;
	p=start;
	temp=new node;
	if(temp==NULL)
		return;
	temp->info=k;
	while(p->info!=data)
	{
		p=p->next;
	}
	temp->next=p->next;
	p->next=temp;
}
void del(int data)
{
	node *p=start;
	if(start->info==data)
	{
		start=p->next;
		delete p;
		return;
	}
	node *temp;
	while(p->info!=data)
	{
		temp=p;
		p=p->next;
	}
	temp->next=p->next;
	delete p;


}
void traverse()
{
	node *p=start;
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->next;
	}
}
void reverse()
{
	node *res=NULL;
	node *cur=start;
	node *next;
	while(cur!=NULL)
	{
		next=cur->next;
		cur->next=res;
		res=cur;
		cur=next;
	}
	start=res ;
}
int main()
{
	insert_beg(23);
	insert_beg(2);
	insert_beg(3);
	insert_beg(5);
	insert_beg(6);
	insert_beg(89);
	insert_end(112);
	insert_end(9);
	insert_after(6,555);
	del(3);
	reverse();
	traverse();
}